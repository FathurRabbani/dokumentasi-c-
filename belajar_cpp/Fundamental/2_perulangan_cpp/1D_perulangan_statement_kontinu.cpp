#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        std::cout << i;
    } // Outputs: 13579

    return 0;
}