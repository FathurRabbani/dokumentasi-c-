#include <iostream>
#include <string>
#include <iomanip>

// membuat struct untuk organize input array
using daftarAnggota = struct
{
    std::string nama;
    std::string alamat;
    std::string usia;
    std::string nomorTelepon;
};

int main()
{
    // inisialisasi struct kontak
    daftarAnggota daftar_1[100];

    // eksekusi input
    int indexInput;
    std::cout << "Masukan Jumlah Input Anggota : ";
    std::cin >> indexInput;

    for (auto ElemenInput{0}; ElemenInput < indexInput; ElemenInput++)
    {
        std::cin.ignore();
        std::cout << "DATA ANGGOTA KE-" << ElemenInput << std::endl;

        // memasukan nama
        std::cout << "Nama \t \t:";
        getline(std::cin, daftar_1[ElemenInput].nama);

        // memasukan usia
        std::cout << "Usia \t \t:";
        getline(std::cin, daftar_1[ElemenInput].usia);

        // memasukan alamat
        std::cout << "Alamat \t \t:";
        getline(std::cin, daftar_1[ElemenInput].alamat);

        // memasukan nomor telepon
        std::cout << "Nomor telepon \t:";
        getline(std::cin, daftar_1[ElemenInput].nomorTelepon);
    }

    std::cout << "====================================================================" << std::endl;

    // menampilkan daftar input dengan fungsi setw()
    std::cout << "Daftar Nama Yang diinput" << std::endl;
    // head nama tabel
    std::cout << std::setw(9) << "Nama" << " | ";
    std::cout << std::setw(6) << "Usia" << " | ";
    std::cout << std::setw(20) << "Alamat" << " | ";
    std::cout << std::setw(15) << "Nomor Telepon" << " | ";
    std::cout << std::endl;
    for (auto daftarElemen{0}; daftarElemen < indexInput; daftarElemen++)
    {

        // isi tabel
        std::cout << std::setw(9) << daftar_1[daftarElemen].nama << " | ";
        std::cout << std::setw(6) << daftar_1[daftarElemen].usia << " | ";
        std::cout << std::setw(20) << daftar_1[daftarElemen].alamat << " | ";
        std::cout << std::setw(15) << daftar_1[daftarElemen].nomorTelepon << " | ";
        std::cout << std::endl;
    }

    return 0;
}