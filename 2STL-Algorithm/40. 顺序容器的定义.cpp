#include <iostream>
#include <vector>
#include <list>
#include <string>

/* ˳��������
 * vector�������������
 * list��  ���ٲ����ɾ��
 * deque�� �����������˶��ɲ���

 * ˳��������������
 * stack�����Ƚ���
 * queue���Ƚ��ȳ�
 * priority_queue�����ֵ����Сֵ�����ȼ�
 */

using namespace std;

/*˳�������Ķ���*/

int main()
{
    vector<string> str_vec;  //ʹ��stringĬ�ϵĹ��캯��
    str_vec.push_back("Hello");
    str_vec.push_back("C++");
    str_vec.push_back("NiceTU");

    //����ֱ��ʹ��vector��ʼ��list���������õ�����
    list<string> str_list(str_vec.begin(), str_vec.end());

    //��������˷�һЩ�������ͺ��Զ��������⣬Ҳ���Է�ͬ���͵�����
    vector<vector<string> > lines;  //ע��>>Ҫ�ֿ�

    cout << "û���⣡" << endl;

    return 0;
}
