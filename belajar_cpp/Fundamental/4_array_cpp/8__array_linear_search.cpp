#include <iostream>

// prototype fungsi
bool pencarianLinear(int array[], int ukuran, int nilai); // fungsi untuk mencari nilai array
void cetakArray(int array[], int ukuran); // fungsi untuk mencetak array


int main(){
    // set variabel input
    int angka;
    char req;

    // data array
    int data[9] = {
        100, 200, 300, 400, 500, 600, 700, 800, 900
    };

    // mengirim permmintaan
    std::cout << "mencari data ? y/n :... ";
    std::cin >> req;

    // loop permintaan
    while(req == 'y'){
        std::cout << "barisan angka ";
        cetakArray(data, 9);
        std::cout << "masukan angka yang dicari : ";
        std::cin >> angka;
        std::cout << std::endl;
        std::cout << "nilai " << angka << (pencarianLinear(data, 8, angka) ? " ditemukan" : " tidak ditemukan") << std::endl;
        std::cout << "mencari data lagi? y/n :...";
        std::cin >> req;
    }

    return 0;
}


// fungsi logika menemukan angka yang dicari
bool pencarianLinear(int array[], int ukuran, int nilai){
    int indeks = 0;
    bool hasil = false;
    while(indeks < ukuran && !hasil){
        if(array[indeks] == nilai){
            hasil = true;
        }else{
            indeks += 1;
        }
    }
    return hasil;
}

// fungsi untuk mencetak data angka
void cetakArray(int array[], int ukuran){
    std::cout << "| ";
    for(auto range = 0; range < ukuran; range++){
        std::cout << array[range];
        if(range != ukuran){
            std::cout << ", ";
        }
    }
    std::cout << " |" << std::endl;
}
