#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>  //�ַ�����

using namespace std;

/*�ַ��������ڴ���ٶȿ�*/

int main()
{
    string fileName, str, word;
    vector<string> vec;
    istringstream isstream;

    fileName = "book1.txt";

    ifstream inFile(fileName.c_str());

    if (!inFile){
        cout << "Can not open: " << fileName << endl;
        return -1;
    }

    while (getline(inFile, str))
        vec.push_back(str);

    inFile.close();

    for (vector<string>::const_iterator it = vec.begin(); it != vec.end(); ++it){
        //���д�ӡ��cout << *it << endl;

        //������ʴ�ӡ
        isstream.str(*it);  //�ַ���������ַ���
        while (isstream >> word){
            cout << word << endl;
        }
        isstream.clear();
    }


    return 0;
}
