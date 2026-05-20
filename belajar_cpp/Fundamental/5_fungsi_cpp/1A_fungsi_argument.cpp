#include <iostream>

// inisialisasi fungsi
int hitungLuas(int panjang, int lebar);

int main(){
    int panjang = 6, lebar = 10;
    int hasil = hitungLuas(panjang, lebar);
    std::cout << "hasil hitung luas persegi panjang : " << hasil << std::endl;
    return 0;
}


int hitungLuas(int panjang, int luas){
    int hasil = panjang *  luas;
    return hasil;
}