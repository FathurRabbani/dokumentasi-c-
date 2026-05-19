#include <iostream>
#include <cstring>

int main() {
    char str1[] {"pemrogramman c++"};
    char str2[16];
    int indeks;

    indeks = strlen(str1);

    for(auto in{0}; in < indeks; in++){
        str2[in] = str1[in];
    }

    str2[indeks] = '\0';

    std::cout << "string 1 : " << str1 << std::endl;
    std::cout << "string 2 : " << str2 << std::endl;

    return 0;
}