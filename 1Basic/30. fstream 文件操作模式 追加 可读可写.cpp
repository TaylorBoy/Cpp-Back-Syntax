#include <iostream>
#include <fstream>

using namespace std;

/*�ļ�ģʽ*/

int main()
{
    string str;

    ifstream inFile("file1.txt", ifstream::in);
    //  ����ʡ�� fstream inFile("file.txt");
    inFile >> str;
    inFile.close();
    cout << str << endl;

    /// ����ļ������ڣ����½�һ�����ļ������Ѵ��ڣ������ԭ����
    //  ofstream outFile("file2.txt", ofstream::out | ofsream::trunc); //trunc��ȡ
    ofstream outFile("file2.txt", ofstream::out | ofstream::app);
    //  ofstream outFile("file2.txt");
    outFile << "Hello World !" << endl;
    outFile.close();

    //  ׷�ӷ�ʽ��ofstream outFile("file", ofstream::out | ofstream::app); //app: append

    /// �ȿ��������ֿ������
    fstream IOFile("file2.txt", fstream::in | fstream::out | fstream::app | fstream::ate); //ate:at end
    //  fstream IOFile("file2.txt");
    IOFile << "fstream";
    IOFile.close();

    return 0;
}
