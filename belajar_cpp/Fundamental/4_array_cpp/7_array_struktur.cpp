/*
output masih error, kemungkinan kejebak infinite loop.
besok lanjutin array struct. 
halaman terakhir 179
*/ 

#include <iostream>
#include <iomanip>
#include <string>

// membuat struct untuk input
using kontak = struct{
    std::string nama;
    std::string alamat;
    std::string nomor;
};

int main(){
    // jumlah daftar kontak
    kontak daftar[100];
    int indeks; // banyaknya input

    std::cout << "Masukkan jumlah data : ";
    std::cin >> indeks;
    std::cout << std::endl;

    // prosses input menggunakan getline dan loop
    for(auto range {0}; range < indeks; range++){
        std::cin.ignore();
        std::cout << "DATA KE-" << range + 1 << std::endl;
        std::cout << "Nama \t: ";
        getline(std::cin, daftar[range].nama);
        std::cout << "Alamat \t: ";
        getline(std::cin, daftar[range].alamat);
        std::cout<< "Nomor HP \t: ";
        getline(std::cin, daftar[range].nomor);
    }

    // menampilkan output dengan loop
    for(auto range {0}; range < indeks; range++){
        std::cout << std::setw(9) << daftar[range].nama << "|";
        std::cout << std::setw(20) << daftar[range].alamat << "|";
        std::cout << std::setw(12) << daftar[range].nomor << "|";
    }
    
    return 0;
}