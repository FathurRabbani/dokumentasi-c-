#include <iostream>

int main()
{
    int i = 1;
    int &ri = i; // ri merefresinkan ke variabel i

    ri = 2; // nilai variabel i juga diganti menjadi 2
    std::cout << "i=" << i;

    i = 3; //  nilai variabel ri juga diganti menjadi 33
    std::cout << "ri=" << ri;

    return 0;
}