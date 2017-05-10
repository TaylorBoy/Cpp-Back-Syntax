#include <iostream>
#include <stdexcept>  //runtime_error
#include <fstream>
#include <string>

/*读取文件；连续输入整数，结束后继续输一个double数据*/

using namespace std;

std::istream& get(std::istream& in)
{
    //该函数应一直读取流
    int val;

    while (in >> val, !in.eof()){
        if (in.bad()){
            throw runtime_error("IO stream error!");
        }
        if (in.fail()) {
            std::cerr << "Data error, try again." << std::endl;
            in.clear();
            in.ignore(200, '\n');
            continue;
        }
        std::cout << "输入的数据是：" << val << std::endl;
    }

    in.clear();

    return in;
}

int main()
{
    cout << "测试函数1；" << endl;
    string inFileName;
    cin  >> inFileName;
    ifstream inFile(inFileName.c_str());
    if (!inFile){
        cerr << "Error: cant not open input file!" << inFileName << endl;
    }
    get(inFile);



    cout << "\n测试函数2：" << endl;

    double d_val;

    //使用标准输入
    get(cin);

    cout << "使用cin输入一个double类型的数据：" << endl;
    cin >> d_val;
    cout << "输入的是：" << d_val << endl;

    return 0;
}
