#include <iostream>
#include <iomanip>

// membuat tipe bentukan untuk beberapa array yang sama
typedef int elemen_array[5];

int main()
{
    // inisialisasi sejumlah array
    elemen_array hm, cm, m, km, mm;

    for (auto indeks{0}; indeks < 5; indeks++)
    {
        hm[indeks] = indeks + 1;
        km[indeks] = (indeks + 1) * 10;
        m[indeks] = (indeks + 1) * 1000;
        cm[indeks] = (indeks + 1) * 100000;
        mm[indeks] = (indeks + 1) * 10000000;
    }

    // hitungan kilometer
    std::cout << "hitungan hectometer " << std::endl;
    for (auto indeks : hm){
        std::cout << indeks << std::setw(10);
    }
    std::cout << std::endl;
    std::cout << std::endl;


    // hitungan centimeter
    std::cout << "hitungan kilometer " << std::endl;
    for (auto indeks : km){
        std::cout << indeks << std::setw(10);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    // hitungan meter
    std::cout << "hitungan meter " << std::endl;
    for (auto indeks : m){
        std::cout << indeks << std::setw(10);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    // hitungan kilometer
    std::cout << "hitungan centimeter " << std::endl;
    for (auto indeks : cm){
        std::cout << indeks << std::setw(10);
    }
    std::cout << std::endl;
    std::cout << std::endl;

    // hitungan milimeter
    std::cout << "hitungan milimeter " << std::endl;
    for (auto indeks : mm){
        std::cout << indeks << std::setw(10);
    }

    return 0;
}