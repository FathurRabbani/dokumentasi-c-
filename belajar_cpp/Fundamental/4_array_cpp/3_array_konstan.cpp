#include <iostream>
#include <string>

// deklarasi array konstan dengan nama hari
const std::string nama_hari[7]{
    "senin",
    "selasa",
    "rabu",
    "kamis",
    "jumat",
    "sabtu",
    "minggu"
};

int main(){
    for(auto hari : nama_hari){
        std::cout << hari << std::endl;
    }
    return 0;
}