#include <iostream>
#include <string>

using namespace std;

/*�޸�string����ķ���
 *
 * ʹ�õ�����������������ͨ��
 */

int main()
{
    string s("Hello");
    string s2("C++");

    string::iterator it = s.begin();
    ++it;

    //����һ���ַ�
    s.insert(it,'A');
    cout << "����һ���ַ�: " << s << endl;

    it = s.begin();
    ++it;

    //����n���ַ�
    s.insert(it,3,'B');
    cout << "����n���ַ� : " << s << endl;

    //����string
    string::iterator bgn = s2.begin();
    string::iterator stp = s2.end();

    s.insert(it,bgn,stp);
    cout << "����string  : " << s << endl;

    //����assign
    cout << "����assign: " << endl;

    s = "char";
    cout << "ԭ�ַ�����"  << s << endl;

    s.assign(8,'K');
    cout << s << endl;

    s.assign(bgn,stp);
    cout << s << endl;

    //ɾ��

    s = "Aabcd";
    it = s.begin();
    s.erase(it);
    cout << "ɾ��֮��" << s << endl;

    s = "ABCDEFGH";
    it = s.begin();
    ++it;
    ++it;
    string::iterator it2 = s.end();
    --it2;
    s.erase(it, it2);  //��it��it2,��ͷ����β
    cout << s << endl;




    return 0;
}
