#include <iostream>
#include <sstream>  //�ַ�����

/*�ַ��������ڴ���ٶȿ�*/

using namespace std;

int main()
{
    cout << "���������뵽�ַ�����...\n";

    ostringstream osstream;
    osstream << "����: " << "douBi" << "\n" //����ӿո��������ַ�����������������ӿո�
             << "����: " << 22 << "\n"
             << "����: " << 88.8 << "\n";

    cout << "���ڴ��е��ַ���������\n" << osstream.str();

    cout << endl << "��ȡ�ڴ��е��ַ�����" << endl;

    string dump;   //����������
    string name;
    int age;
    double weight;

    istringstream isstream(osstream.str());
    isstream >> dump;  //���� ����
    cout << "dump: " << dump << endl;
    isstream >> name;
    isstream >> dump;
    cout << "dump: " << dump << endl;
    isstream >> age;
    isstream >> dump;
    cout << "dump: " << dump << endl;
    isstream >> weight;

    cout << name << endl;
    cout << age  << endl;
    cout << weight << endl;


    return 0;
}
