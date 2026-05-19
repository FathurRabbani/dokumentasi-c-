## Apa Itu Array
Array (larik) adalah sekumpulan variabel bertipe sama yang mengacu pada satu nama. masing-masing variabel di dalam array disebut sebagai elemen array, yang dapat diakses melalui indeksnya. dalam c++ indeks array dimulai dari 0, bukan dari 1. indeks berfungsi sebagai menentukan posisi dari elemen array. berikut ini adalah contoh array yang bernama a yang berisi 5 elemen array.

| a[0] | a[1] | a[2] | a[3] | a[4] |
| ---- | ---- | ---- | ---- | ---- |
| 1000 | 2000 | 3000 | 4000 | 5000 |
Dalam banyak kasus array sering digunakan dalam mengelompokan mengelola data.

# mendeklarasikan Array

```cpp
tipeData NamaArray[jumlahElemen]{nilai1, nilai2, nilai3, ...};
tipeData namaArray[]{anggota1, anggota2, anggota3,...};

double nilai[]{88.4, 98.6, 86.3};
int anggota[4]{1,2,3,4,5};
std::string nama[]{"yulian", "fahri", "juan", "mida"};
```

# Hal-hal yang perlu diperhatikan
1. kita tidak dapat menggunakan auto sebagai pengganti tipe data pada saat menggunakan array, contoh: 
``` cpp
auto anggota_array[5]{1, 2, 3, 4, 5, 6};
```
2. foreach loop pada array hanya bisa digunakan satu elemen array saja, contoh: 
contoh benar:
```cpp
// deklarasi array
int SkorUtbk[] = {789, 886, 864, 755, 794, 742, 890};

// menggunakan foreach array pada c++
for (auto range : SkorUtbk){
		// hanya nisa menggunakan satu tipe array
        std::cout  <<"hasil subtes adalah " << range << std::endl;
    }
```
contoh salah: akan mengakibatkan segmentation fault
```cpp
// deklarasi array
int SkorUtbk[] = {789, 886, 864, 755, 794, 742, 890};
std::string Subtes[] = {"PU ", "PPU", "PBM", "PK ", "LBI", "LBE", "PM "};

// menggunakan foreach array pada c++
for (auto range : SkorUtbk){
		// hanya nisa menggunakan satu tipe array
        std::cout <<"hasil subtes " << Subtes[range] << " adalah " << SkorUtbk[range] << std::endl;
    }
```
	
3. jika menginput array manual, maka harus dilakukan di dalam fungsi utama, contoh benar: 
```cpp
// membuat array secara manual
int urutan[7];

int main(){
// input nilai array manual
    urutan[0] = 1;
    urutan[1] = 2;
    urutan[2] = 3;
    urutan[3] = 4;
    urutan[4] = 5;
    urutan[5] = 6;
    urutan[6] = 7;
return 0;
}
```
contoh salah:
```cpp
// membuat array secara manual
int urutan[7];
// input nilai array manual
    urutan[0] = 1;
    urutan[1] = 2;
    urutan[2] = 3;
    urutan[3] = 4;
    urutan[4] = 5;
    urutan[5] = 6;
    urutan[6] = 7;
int main(){

return 0;
}
```