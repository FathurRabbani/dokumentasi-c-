#include <iostream>

// tipe data bilangan
short tipeShort; // tipe short ukuran 2 byte jangkauan bilangan bulat(-32.768--32.768)
unsigned short uTipeShort; // tipe short unsigned bilangan cacah (0--65.000)
int tipeInt; // tipe data int ukuran 4 byte jangkauan bilangan bulat (-2.147.483.647)
unsigned uTipeInt; // jangkauan bilangan cacah (4.294.967.295)
long long tipeLong; // ukuran 9 byte jangakauan bilangan bulat (9.223.372.036.854.775.807)

// tipe data floating point atau desimal
float tipeFloat; // ukuran 4 byte jangakauan bilangan desimal (1*10^38)
double tipeDouble; // ukuran 8 byte jangkauan bilangan desimal (1*10^308)
long double lDouble; // ukuran 12 byte jangkauan bilangan desimal (1*10^4932)

// tipe data bool
bool tipeBool; // 1 byte untuk menentukan pernyataan benar atau salah

// tipe char 
char tipeChar; // 1 byte untuk menyimpan huruf atau simbol


int main (){
    std::cout << "menentukan tipe data." << std::endl;
    return 0;
}