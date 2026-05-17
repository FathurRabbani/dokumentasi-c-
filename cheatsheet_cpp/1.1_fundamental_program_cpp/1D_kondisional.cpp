#include <iostream>

int main()
{
    int nilaiA = 5, nilaiB = 10;
    
    if(nilaiA == 5){
        std::swap(nilaiA, nilaiB);
    }

    // Outputs: a=10, b=5
    std::cout << "nilai a=" << nilaiA << ", nilai b=" << nilaiB;

    return 0;
}