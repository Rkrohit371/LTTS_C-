#include<iostream>

enum IPClass {
    A,
    B,
    C,
    D
};

class IPAddress {
    private:
        uint32_t ipval;
    public:
        IPClass ipclass;
        IPAddress();
        IPAddress(uint8_t a, uint8_t b, uint8_t c, uint8_t d);    //a,b,c,d vals
        IPAddress(std::string value);                    //"a.b.c.d" format
        bool isLoopBack() const;
        IPClass getIPClass() const;
        void dispay() const;
};
