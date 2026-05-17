#include <iostream>
#include <vector>

int main() {
    // Menggunakan array biasa
    int angka[] = {10, 20, 30, 40, 50};

    std::cout << "Isi array: ";
    for (int n : angka) {
        std::cout << n << " ";
    }

    // Menggunakan vector lebih modern
    std::vector<std::string> buah = {"Apel", "Jeruk", "Mangga"};
    
    std::cout << "\nDaftar buah: ";
    for (const auto& b : buah) { // Menggunakan auto dan reference agar lebih efisien
        std::cout << b << " ";
    }

    return 0;
}
