#include <iostream>

int main()
{
    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        std::cout << "i=" << i << ",";
        std::cout << "j=" << j << ";";
    }
    // Outputs: i=0,j=2;i=1,j=1;i=2,j=0;

    return 0;
}