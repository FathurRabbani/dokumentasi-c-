// file header
#include <iostream> // input dan output
#include <string>   // membuat teks
#include <iomanip>  // manipulasi teks spasi
#include <ctime>    // memanggil data random
#include <fstream>  // akses direktori
#include "dataBase.cpp"

// memanggil variabel file database extern
extern int DataUsia[20];
extern std::string DataNama[50];
extern std::string DataAlamat[20];
extern std::string DatanomorTelepon[20];

// deklarasi stream sebagai output
std::ofstream outputFile;

// membuat struct untuk organize input array
using daftarAnggota = struct
{
    int usia;
    std::string nama;
    std::string alamat;
    std::string nomorTelepon;
};

// deklarasi fungsi
void tampilan_2();
void garis();
void teksWrite();
void garisWrite();

int main()
{

    // eksekusi input
    int indexInput;
    std::cout << "Masukan Jumlah Input Anggota : ";
    std::cin >> indexInput;

    // inisialisasi struct kontak
    daftarAnggota daftar_1[indexInput];
    garis();

    for (auto ElemenInput{0}; ElemenInput < indexInput; ElemenInput++)
    {
        // std::srand(std::time(nullptr));
        int random{std::rand() % 18 + 1};
        int namaRandom{std::rand() % 48 + 1};
        daftar_1[ElemenInput].nama = DataNama[namaRandom];
        daftar_1[ElemenInput].alamat = DataAlamat[random];
        daftar_1[ElemenInput].usia = DataUsia[random];
        daftar_1[ElemenInput].nomorTelepon = DatanomorTelepon[random];
    }

    // menampilkan daftar input dengan fungsi setw()
    std::cout << "Daftar Nama Yang diinput" << std::endl;
    garis();

    // head nama tabel
    tampilan_2();
    for (auto daftarElemen{0}; daftarElemen < indexInput; daftarElemen++)
    {
        // isi tabel
        std::cout << " | ";
        std::cout << std::setw(5) << daftarElemen + 1 << " | ";
        std::cout << std::setw(20) << daftar_1[daftarElemen].nama << " | ";
        std::cout << std::setw(6) << daftar_1[daftarElemen].usia << " | ";
        std::cout << std::setw(50) << daftar_1[daftarElemen].alamat << " | ";
        std::cout << std::setw(15) << daftar_1[daftarElemen].nomorTelepon << " | ";
        std::cout << std::endl;
    }
    garis();



    // membuat file txt
    outputFile.open("data anggota.csv", std::ios::out);

    // jika file gagal dibukaw
    if (!outputFile)
    {
        std::cout << "file gagal dibuka!" << std::endl;
    }

    // menulis file txt
    if (outputFile.is_open())
    {
        outputFile << "Daftar Nama Yang diinput" << std::endl;
        garisWrite();
        // head nama tabel
        teksWrite();
        for (auto daftarElemen{0}; daftarElemen < indexInput; daftarElemen++)
        {
            // isi tabel
            outputFile << " , ";
            outputFile << std::setw(5) << daftarElemen + 1 << " , ";
            outputFile << std::setw(20) << daftar_1[daftarElemen].nama << " , ";
            outputFile << std::setw(6) << daftar_1[daftarElemen].usia << " , ";
            outputFile << std::setw(50) << daftar_1[daftarElemen].alamat << " , ";
            outputFile << std::setw(15) << daftar_1[daftarElemen].nomorTelepon << " , ";
            outputFile << std::endl;
        }
        garisWrite();
        
    }

    outputFile.close();

    return 0;
}

// fungsi untuk tampilan
void tampilan_2()
{
    std::cout << " | ";
    std::cout << std::setw(5) << "No" << " | ";
    std::cout << std::setw(20) << "Nama" << " | ";
    std::cout << std::setw(6) << "Usia" << " | ";
    std::cout << std::setw(50) << "Alamat" << " | ";
    std::cout << std::setw(15) << "Nomor Telepon" << " | ";
    std::cout << std::endl;
    std::cout << "=================================================================================================================" << std::endl;
}
// fungsi untuk membuat garis
void garis()
{
    std::cout << "=================================================================================================================" << std::endl;
}



// fungsi menampilkan khusus di dalam file txt
void teksWrite()
{
    outputFile << " , ";
    outputFile << std::setw(5) << "No" << " , ";
    outputFile << std::setw(20) << "Nama" << " , ";
    outputFile << std::setw(6) << "Usia" << " , ";
    outputFile << std::setw(50) << "Alamat" << " , ";
    outputFile << std::setw(15) << "Nomor Telepon" << " , ";
    outputFile << std::endl;
    outputFile << "=================================================================================================================" << std::endl;
}
// fungsi untuk membuat garis
void garisWrite()
{
    outputFile << "=================================================================================================================" << std::endl;
}