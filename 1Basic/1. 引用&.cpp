#include <iostream>


int main()
{
    int source = 7788;
    int &reference = source; //ÒıÓÃ
    std::cout << reference << std::endl;

    reference = 1024;

    std::cout << source << std::endl;

    double source2 = 3.14;
    const int &ref1 = source2;
    std::cout << ref1 << std::endl;

    const int &ref2 = 2;
    std::cout << ref2 << std::endl;

    return 0;
}
