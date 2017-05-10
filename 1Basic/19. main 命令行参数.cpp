#include <iostream>
using namespace std;

/*main命令行选项*/

/// argc 选项个数；argv 每一个选项是一个字符串
int main(int argc, char **argv)
{
    for (int i = 0; i < argc; ++i){
        cout << argv[i] << endl;
    }
    //argv[0] 是程序名

    return 0;
}


//计算两个数之和/*
main (int argc, char **agrv)
{
	if (3 == argc){
        cout << argv[1] << " + " << argv[2] << " = "
             << (atof(argv[1]) + atof(argv[2])) << endl;
    }
}
*/

