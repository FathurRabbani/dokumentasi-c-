#include <iostream>
#include <string>
#include <cstdlib>

int main(){
    int no_hari;
    std::string nama_hari;

    std::cout << "masukan nomor hari : ";
    std::cin >> no_hari;

    switch(no_hari){
        case 1: nama_hari = "senin"; break;
        case 2: nama_hari = "selasa"; break;
        case 3: nama_hari = "rabu"; break;
        case 4: nama_hari = "kamis"; break;
        case 5: nama_hari = "jum'at"; break;
        case 6: nama_hari = "sabtu"; break;
        case 7: nama_hari = "minggu"; break;
        default:{
            std::cout << "tidak ada hari ke-" << no_hari << std::endl;
            exit(1);
        }
    }

    std::cout << "hari " << nama_hari << " adalah hari yang ke " << no_hari << std::endl;
    
    return 0;
}