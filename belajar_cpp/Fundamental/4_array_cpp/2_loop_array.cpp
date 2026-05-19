#include <iostream>
#include <string> // std::string
#include <iomanip> //  std::setw()


// initial array dengan nama_bulan
std::string nama_bulan[]{
    "Januari", "Februari", "Maret", "April", "Mei", "juni",
    "Juli", "Agustus", "September", "Oktober", "November", "Desember"
};

int main(){

    // memanggil data array dengan for loop
    std::cout << "nama-nama bulan : " << std::endl;
    for(auto range {0}; range < 12; range++){
        std::cout << std::setw(2) << range + 1 << ". ";
        std::cout << nama_bulan[range] << std::endl;
    }

    return 0;
}