#include <iostream>

using std::endl;

/*枚举*/

enum Week{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday = 100,
    Saturday,
    Sunday
};

int main()
{
    Week w;

    w = Monday;
    std::cout << w << std::endl;

    w = Sunday;
    std::cout << w << endl;

    return 0;
}
