#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/*�ַ�����*/

int main()
{
    //cout��������ostream
    cout << "Hello cout" << endl;

    //outFile���ļ����������
    ofstream outFile("text.txt");
    outFile << "Hello ofstream" << endl;
    outFile.close();

    //�ַ��������
    ostringstream outSS;
    outSS << "hello ostringstream!" << endl;

    cout << "��ʾ�ַ�����������ַ�����" << outSS.str() << endl;

    return 0;
}
