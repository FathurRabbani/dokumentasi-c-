#include <iostream>

int main()
{
    int i = 0;
    while (i < 6)
    {
        std::cout << i++;
    }

    // Outputs: 012345

    return 0;
}