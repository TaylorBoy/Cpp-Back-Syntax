#include <iostream>
#include <string>

/*sring (2)*/

using namespace std;

int main()
{
    string str("Hello World!");
    cout << "The size of str: " << str.size() << endl;

    //�ַ�����С���ͣ�>=0
    string::size_type num = str.size();
    cout << "size : " << num << endl;

    //�ַ�����С�Ƚ�,���ģ�ƴ����Ӣ�ģ�ASCII
    //string str1("big");
    //string str2("small");
    string str1("���ȱ�");
    string str2("ɵ��");
    if (str1 > str2){
        cout << str1 << " > " << str2 << endl;
    }else if (str1 < str2){
        cout << str2 << " > " << str1 << endl;
    }else{
        cout << str1 << " == "<< str2 << endl;
    }

    //�ַ������
    cout << "str1 + str2: " << str1+str2 << endl;
    string str3 = str1 +"dandan"+"dandan"+"dandan" +str2;
    //����string str3 = str2 +"doufw" +"fwef";
    //����string str3 = "dou" + "bi"; ����һ���ַ�������
    cout << "add : " << str3 << endl;


    return 0;
}
