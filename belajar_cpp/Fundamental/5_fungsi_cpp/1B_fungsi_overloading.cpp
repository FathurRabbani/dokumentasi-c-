#include <iostream>
#include <string>


// inisialisasi fungsi overloading
int hitungLuas(int panjang, int lebar);
double hitungLuas(double panjang, double lebar);
void hitungLuas(std::string teks1, std::string teks2);


int main(){
    // memanggil fungsi overloading
    std::cout << "hasil hitung bilangan bulat " << hitungLuas(100, 2) << std::endl;
    std::cout << "hasil hitung bilangan bulat " << hitungLuas(7.7, 2.5) << std::endl;
    hitungLuas("fathur", "rabbani");

    return 0;
}

// fungsi menghitung bilanagan bulat
int hitungLuas(int panjang, int lebar){
    return panjang * lebar;
}

// fungsi menghitung bilangan desimal
double hitungLuas(double panjang, double lebar){
    return panjang * lebar;
}

// fungsi menampilkan string
void hitungLuas(std::string teks1, std::string teks2){
    std::cout << "penggabungan string " << teks1 << " " << teks2 << std::endl;
}

// fungsi overloading adaklah fungsi yang menimpa fusngi lainnya dengan nilai input tertentu