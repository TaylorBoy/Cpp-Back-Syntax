#include <iostream>
#include <stdexcept>  //runtime_error
#include <fstream>
#include <string>

/*��ȡ�ļ����������������������������һ��double����*/

using namespace std;

std::istream& get(std::istream& in)
{
    //�ú���Ӧһֱ��ȡ��
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
        std::cout << "����������ǣ�" << val << std::endl;
    }

    in.clear();

    return in;
}

int main()
{
    cout << "���Ժ���1��" << endl;
    string inFileName;
    cin  >> inFileName;
    ifstream inFile(inFileName.c_str());
    if (!inFile){
        cerr << "Error: cant not open input file!" << inFileName << endl;
    }
    get(inFile);



    cout << "\n���Ժ���2��" << endl;

    double d_val;

    //ʹ�ñ�׼����
    get(cin);

    cout << "ʹ��cin����һ��double���͵����ݣ�" << endl;
    cin >> d_val;
    cout << "������ǣ�" << d_val << endl;

    return 0;
}
