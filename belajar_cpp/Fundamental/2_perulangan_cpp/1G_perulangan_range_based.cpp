#include <iostream>

int main()
{
    for (int n : {1, 2, 3, 4, 5})
    {
        std::cout << n << " ";
    }
    // Outputs: 1 2 3 4 5

    std::cout << std::endl;

    std::string hello = "fathurrrr";
    for (char c : hello)
    {
        std::cout << c << " ";
    }
    // Output: fathurrrr

    return 0;
}