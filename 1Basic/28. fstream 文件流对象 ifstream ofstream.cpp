#include <iostream>
#include <fstream>

using namespace std;

/*�ļ��������ʹ��*/

int main()
{
    ofstream outFile("test.txt");
    outFile << "wo le ge cao\nni ge dan dan!";
    outFile.close();

    string fileName("main.cpp"); //�����Ƿ���ַ���
    ifstream inFile(fileName.c_str());
///    ifstream infile; û�а��ļ�
///    infile.open(file.c_str());  //��

    //�����ȡ
    cout << "�ڶ��ζ�ȡ�ļ���\n";
    string str;
    while (inFile >> str ){
        cout << str << endl;
    }
    inFile.close();  //inFile��״̬��EOF
    inFile.clear();  //�ָ���״̬�����ܸ��ò����µ��ļ�

    //�����ȡ
    inFile.open("test.txt");
    cout << "\n�ڶ��ζ�ȡ�ļ���\n\n";
    while (inFile >> str){
        cout << str << endl;
    }
    inFile.close();
    inFile.clear();


    return 0;
}
