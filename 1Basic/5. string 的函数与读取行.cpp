#include <iostream>

/*�ַ���string ��3��*/
#include <string>

using namespace std;

int main()
{
    //string ���Ͳ���C�����е��ַ����飬��
    string str("Hello!");

    cout << str[1] << endl;
    cout << str[4] << endl;

    //����ֵsize_type���int
    for (string::size_type i = 0; i < str.size(); ++i){
        cout << str[i] << " ";
    }

    //����
    //isalnum(c) ��ĸ������
    //isdigit(c) ����
    //isalpha(c) ��ĸ
    //ispunct(c) ���
    //iscntrl(c) �����ַ�
    //islower(c)
    //isupper(c)
    //isspace(c)
    //isxdigit(c) 16����
    //tolower(c)
    //toupper(c)

    //ȥ���
    cout << "\nPlease Input Something: " << endl;
    getline(cin, str);
    string str2;
    for (string::size_type i = 0; i < str.size(); ++i){
        if ( !ispunct(str[i]) ){
            str2 += str[i];
        }
    }
    cout << str2 << endl;

    return 0;
}
