#include <iostream>
#include <string>

using kontakProfil = struct{
    std::string nama;
    std::string alamat;
    std::string nomorTelepon[3];

};

int main (){
    // variabel bertipe struktur
    kontakProfil Fathur;
    Fathur.nama = "Muhammad Fathur Rabbani";
    Fathur.alamat = "Jatiwaringin";
    Fathur.nomorTelepon[0] = "08973872939";
    Fathur.nomorTelepon[1] = "08973867433";
    Fathur.nomorTelepon[2] = "08973823934";

    std::cout << "Nama \t \t:" << Fathur.nama << std::endl;
    std::cout << "Alamat \t \t:" << Fathur.alamat << std::endl;
    std::cout << "Nomor Telepon \t:" << Fathur.nomorTelepon[0] << std::endl;
    std::cout << "Nomor Telepon \t:" << Fathur.nomorTelepon[1] << std::endl;
    std::cout << "Nomor Telepon \t:" << Fathur.nomorTelepon[2] << std::endl;


    return 0;
}