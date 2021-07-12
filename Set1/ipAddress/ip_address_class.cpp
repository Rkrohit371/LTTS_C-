#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

enum IPClass {
  A,
  B,
  C,
  D
};

std::string enum_to_string(IPClass type) {
   switch(type) {
      case A:
         return "A";
      case B:
         return "B";
      case C:
         return "C";
      case D:
         return "D";
      default:
         return "Invalid Account type";
   }
}

class IPAddress {
    private:
        uint32_t ipval;
    public:
        IPClass ipclass;
        IPAddress():ipval(2130706433),ipclass(A) {};
        IPAddress(uint8_t a, uint8_t b, uint8_t c, uint8_t d) { 
            int p,q,r,s;
            p = int(a);
            q = int(b);
            r = int(c);
            s = int(d);
            std::cout<<p<<" "<<q<<" "<<r<<" "<<s<<std::endl;
            if(p >= 0 && p <= 127){
                ipclass = A;
            } else if(p >= 128 && p <= 191) {
                ipclass = B;
            } else if(p >= 192 && p <= 223) {
                ipclass = C;
            } else {
                ipclass = D;
            }
            p *= 16777216;
            q *= 65536;
            r *= 256;
            ipval = p+q+r+s;
        }   //a,b,c,d vals
        IPAddress(std::string value) {
            int pos = 0;
            unsigned long long a,b,c,d;
            std::vector<unsigned long long> abcd;
            std::string delimiter = ".";
            std::string token;
            while((pos = value.find(delimiter)) != std::string::npos) {
                token = value.substr(0, pos);
                // std::cout<<token<<std::endl;
                value.erase(0, pos+delimiter.length());
                abcd.push_back(std::stoll(token));
            }
            abcd.push_back(std::stoi(value));
            std::cout<<std::endl;
            a = abcd[0];
            b = abcd[1];
            c = abcd[2];
            d = abcd[3];
            if(a >= 0 && a <= 127){
                ipclass = A;
            } else if(a >= 128 && a <= 191) {
                ipclass = B;
            } else if(a >= 192 && a <= 223) {
                ipclass = C;
            } else {
                ipclass = D;
            }
            a *= 16777216;
            b *= 65536;
            c *= 256;
            ipval = a+b+c+d;
            
        }                       //"a.b.c.d" format
        bool isLoopBack() const {
            if(ipval == 2130706433) {
                return true;
            }
            return false;
        }
        IPClass getIPClass() const {
            return ipclass;
        }
        void dispay() const {
            std::cout<<"IP Value is: "<<ipval<<std::endl;
            std::cout<<"Is loopback: "<<(isLoopBack()?"Yes":"No")<<std::endl;
            std::cout<<"IP class (base 10) is: "<<enum_to_string(ipclass)<<std::endl;
            std::cout<<"----------------------------------"<<std::endl;
        }
};

int main() {
    IPAddress ip1 = IPAddress("127.0.0.1");
    ip1.dispay();
    IPAddress ip2;
    ip2.dispay();
    IPAddress ip3 = IPAddress(uint8_t(250), uint8_t(13), uint8_t(8), uint8_t(32));
    ip3.dispay();
    return 0;
}