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

void output();

int main(){
    // jumlah daftar kontak
    kontak daftar[100];
    int indeks; // banyaknya input

    std::cout << "Masukkan jumlah data : ";
    std::cin >> indeks;
    std::cout << std::endl;

    // prosses input menggunakan getline dan loop
    for(int loops {0}; loops < indeks; loops++){
        std::cin.ignore();
        std::cout << "DATA KE-" << loops + 1 << std::endl;
        std::cout << "Nama \t: ";
        getline(std::cin, daftar[loops].nama);
        std::cout << "Alamat \t: ";
        getline(std::cin, daftar[loops].alamat);
        std::cout<< "Nomor HP \t: ";
        getline(std::cin, daftar[loops].nomor);
        std::cout<<"klik enter untuk lanjut input...";
    }

    std::cout << "\nData yang dimasukan: " << std::endl;

    output();
    // menampilkan output dengan loop
    for(auto range {0}; range < indeks; range++){
        std::cout << std::setw(9) << daftar[range].nama << "|";
        std::cout << std::setw(20) << daftar[range].alamat << "|";
        std::cout << std::setw(12) << daftar[range].nomor << "|";
        std::cout << std::endl;
    }
    
    return 0;
}

void output(){
    std::cout << std::setw(9) << "Nama" << "|";
    std::cout << std::setw(20) << "Alamat" << "|";
    std::cout << std::setw(12) << "Nomor"<< "|";
    std::cout << std::endl;
}