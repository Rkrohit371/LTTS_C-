#include<iostream>
#include "ip_address.h"

int main() {
    IPAddress ip1 = IPAddress("127.0.0.1");
    ip1.dispay();
    IPAddress ip2;
    ip2.dispay();
    IPAddress ip3 = IPAddress(uint8_t(250), uint8_t(13), uint8_t(8), uint8_t(32));
    ip3.dispay();
    return 0;
}