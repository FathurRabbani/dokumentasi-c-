#include <iostream>

int main()
{
    int i = 1;
    do
    {
        std::cout << i++;
    } while (i <= 5);

    // Outputs: 12345

    return 0;
}