#include <iostream>
#include <iomanip>

const int elemen = 6; // menentukan jumlah indek di dalam elemen
typedef int elemen_array[elemen]; // membuat pembentukan tipe daata
void cetakArray(elemen_array array); // inisialisasi fungsi mencetak array

int main()
{
    // inisialisasi array di dalam pembentukan tipe data
    elemen_array a, b, c, d, e;


    // input anggota elmemen
    for(auto indeks{0}; indeks < elemen; indeks++){
        a[indeks] = indeks + 1;
        b[indeks] = (indeks + 1) * 10;
        c[indeks] = (indeks + 1) * 100;
        d[indeks] = (indeks + 1) * 1000;
        e[indeks] = (indeks + 1) * 10000;
    }

    // memanggil fungsi cetak array
    cetakArray(a);
    cetakArray(b);
    cetakArray(c);
    cetakArray(d);
    cetakArray(e);

    return 0;
}

// operasi fungsi cetak array
void cetakArray(elemen_array array)
{
    for (auto indeks{0}; indeks < elemen; indeks++)
    {
        std::cout << std::setw(6) << array[indeks] ;
    }
    std::cout << std::endl;
}