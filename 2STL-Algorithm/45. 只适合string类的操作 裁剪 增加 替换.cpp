#include <iostream>
#include <string>

using namespace std;

/*ֻ�ʺ�string��Ĳ���
 *
 */

int main()
{
    //substr()

    string str("hello world");

    string str2 = str.substr(6, 30); //�ӵ�6����ʼ��50�����������ж��ٸ�����
    cout << str2 << endl;

    str2 = str.substr(2);  //�ӵ�2����ʼ���м���������
    cout << str2 << endl;

    str2 = str.substr();  //ȫ��,str2 = str
    cout << str2 << endl;

    //append()

    str = "hello c++";
    str.append(" My God"); //�ȼ��� str.insert(str.size(), " My God");
    cout << str << endl;

    //replace()

    str.insert(str.size(), " one day");
    cout << str << endl;

    str.replace(17,3,"Four");  //��17λ��ʼ��3λ�滻�ɡ�Four��
    cout << str << endl;

    str.replace(17,4,"Two");
    cout << str << endl;



    return 0;
}
