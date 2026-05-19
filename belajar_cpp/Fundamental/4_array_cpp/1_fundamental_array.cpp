#include <iostream>
#include <string>

// deklarasi dan inisial langsung secara eksplisit
int anggota = 6;
int SkorUtbk[] = {789, 886, 864, 755, 794, 742, 890};
std::string Subtes[] = {"PU ", "PPU", "PBM", "PK ", "LBI", "LBE", "PM "};

// membuat array secara manual
int urutan[7];

int main()
{
    // int SkorUtbk[4]{900}; "tidak mengubah array yang sudah set create"

    // input nilai array manual
    urutan[0] = 1;
    urutan[1] = 2;
    urutan[2] = 3;
    urutan[3] = 4;
    urutan[4] = 5;
    urutan[5] = 6;
    urutan[6] = 7;

    // memanggil nilai array menggunakan nilai int
    for (int range = 0; range <= anggota; range++){
        std::cout << urutan[range] << "." << range <<". hasil subtes " << Subtes[range] << " adalah " << SkorUtbk[range] << std::endl;
    }

    std::cout << std::endl;

    // menngunakan fungsi sizeof()
    for (int range = 0; range < sizeof(SkorUtbk) / sizeof(SkorUtbk[0]); range++){
        std::cout << urutan[range] <<". hasil subtes " << Subtes[range] << " adalah " << SkorUtbk[range] << std::endl;
    }

    std::cout << std::endl;

    // menggunakan auto dan foreach hanya bisa menampilkan satu array
    for (auto range : SkorUtbk){
        std::cout  <<"hasil subtes adalah " << range << std::endl;
    }

    return 0;
}