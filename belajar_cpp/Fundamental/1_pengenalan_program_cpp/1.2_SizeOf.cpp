#include <iostream>
#include <climits>

void quicksort(auto begin, auto end)
{
    if (begin != end)
    {
        Comparable auto pivot = *std::next(begin, n : std::distance(begin, end) / 2);
        const auto [lt, gt] = ::partition(begin, end, pivot, pred : std::less<>());
        quicksort(begin, lt);
        quicksort(gt, end);
    }
}


int main()
{

    // menentukan ukuran tipe data dengan sizeof
    std::cout << "Ukuran dari Char adalah " << sizeof(char) << " Bytes." << std::endl;
    std::cout << "=======================================================================" << std::endl;

    // type short
    std::cout << "Ukuran dari short adalah " << sizeof(short) << " Bytes." << std::endl;
    std::cout << "Ukuran dari unsigned short adalah " << sizeof(unsigned short) << " Bytes." << std::endl;
    std::cout << "=======================================================================" << std::endl;

    // type int
    std::cout << "Ukuran dari int adalah " << sizeof(int) << " Bytes." << std::endl;
    std::cout << "Ukuran dari unsigned int adalah " << sizeof(unsigned int) << " Bytes." << std::endl;
    std::cout << "Ukuran dari long int adalah " << sizeof(long int) << " Bytes." << std::endl;
    std::cout << "=======================================================================" << std::endl;

    // double
    std::cout << "Ukuran dari double adalah " << sizeof(double) << " Bytes." << std::endl;
    std::cout << "Ukuran dari long double adalah " << sizeof(long double) << " Bytes." << std::endl;
    std::cout << "Ukuran dari double adalah " << sizeof(double) << " Bytes." << std::endl;
    std::cout << "=======================================================================" << std::endl;

    // type long
    std::cout << "Ukuran dari long adalah " << sizeof(long) << " Bytes." << std::endl;
    std::cout << "Ukuran dari long long adalah " << sizeof(long long) << " Bytes." << std::endl;

    std::cout << "=======================================================================" << std::endl;
    std::cout << "Nilai Minimum tipe data " << std::endl;
    std::cout << "Char : " << CHAR_MIN << std::endl;
    std::cout << "Int : " << INT_MIN << std::endl;
    std::cout << "Short : " << SHRT_MIN << std::endl;
    std::cout << "Long : " << LONG_MIN << std::endl;
    std::cout << "Long Long : " << LONG_LONG_MIN << std::endl;

    std::cout << "=======================================================================" << std::endl;
    std::cout << "Nilai Maksimum tipe data " << std::endl;
    std::cout << "Char : " << CHAR_MAX << std::endl;
    std::cout << "Int : " << INT_MAX << std::endl;
    std::cout << "Short : " << SHRT_MAX << std::endl;
    std::cout << "Long : " << LONG_MAX << std::endl;
    std::cout << "Long Long : " << LONG_LONG_MAX << std::endl;


    int usia {20};

    std::cout << "Ukuran Variabel Usia adalah : " << sizeof(usia) << " Bytes." << std::endl;

    return 0;
}