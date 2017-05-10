#include <iostream>
#include <map>
#include <string>

/* map��multimap
 *
 * map���������ظ�������
 * multimap�������ظ�
 *
 * ע�⣺����ͨ��find�����޸�
 */

using namespace std;

int main()
{
    //map���������ظ�������              ��   ֵ
    map<int, string> m;

    m.insert(map<int, string>::value_type(1,"One"));
    m.insert(map<int, string>::value_type(2,"Two"));
    m.insert(map<int, string>::value_type(2,"Three"));
    m.insert(make_pair(3, "San"));
    m.insert(pair<int, string>(1000, "One Thousand"));
    m[1000] = "One Million";  //�Ḳ��ǰ����ͬ�ļ���ֵ,multimap������

    map<int, string>::const_iterator it;

    cout << "Map Key and Value: " << endl;
    for (it = m.begin(); it != m.end(); ++it){
        cout << "Key: " << it->first << "\t";
        cout << "Val: " << it->second.c_str() << endl;
    }

    //multimap�������ظ�
    multimap<int, string> ms;

    ms.insert(make_pair(1,"ONE"));
    ms.insert(make_pair(-2,"TWO"));
    ms.insert(make_pair(-2,"THREE"));
    ms.insert(pair<int, string>(1,"FOUR"));

    multimap<int, string>::const_iterator mit;

    /// ɾ����ͬ(��Χ)
    ms.erase(ms.lower_bound(-2), ms.upper_bound(-2));

    cout << endl << "Multimap Key and Value:" << endl;
    for (mit = ms.begin(); mit != ms.end(); ++mit){
        cout << "Key: " << mit->first << "\t";
        cout << "Val: " << mit->second.c_str() << endl;
    }

    cout << "һ���У�" << ms.count(-2) << " ��-2��" << endl;

    /// ����
    multimap<int,string>::const_iterator fd_it;

    fd_it = ms.find(1);

    if (fd_it != ms.end()){
        if (ms.count(1) > 1)
            cout << "��������1---";
        cout << "Finded! " << fd_it->first << " = " << fd_it->second.c_str() << endl;
    }else{
        cout << "Not Finded!\n" ;
    }




    return 0;
}
