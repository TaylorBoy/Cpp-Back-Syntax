#include <iostream>
#include <map>
#include <string>

/* map和multimap
 *
 * map：不允许重复（键）
 * multimap：允许重复
 *
 * 注意：不能通过find进行修改
 */

using namespace std;

int main()
{
    //map：不允许重复（键）              键   值
    map<int, string> m;

    m.insert(map<int, string>::value_type(1,"One"));
    m.insert(map<int, string>::value_type(2,"Two"));
    m.insert(map<int, string>::value_type(2,"Three"));
    m.insert(make_pair(3, "San"));
    m.insert(pair<int, string>(1000, "One Thousand"));
    m[1000] = "One Million";  //会覆盖前面相同的键的值,multimap不能用

    map<int, string>::const_iterator it;

    cout << "Map Key and Value: " << endl;
    for (it = m.begin(); it != m.end(); ++it){
        cout << "Key: " << it->first << "\t";
        cout << "Val: " << it->second.c_str() << endl;
    }

    //multimap：允许重复
    multimap<int, string> ms;

    ms.insert(make_pair(1,"ONE"));
    ms.insert(make_pair(-2,"TWO"));
    ms.insert(make_pair(-2,"THREE"));
    ms.insert(pair<int, string>(1,"FOUR"));

    multimap<int, string>::const_iterator mit;

    /// 删除相同(范围)
    ms.erase(ms.lower_bound(-2), ms.upper_bound(-2));

    cout << endl << "Multimap Key and Value:" << endl;
    for (mit = ms.begin(); mit != ms.end(); ++mit){
        cout << "Key: " << mit->first << "\t";
        cout << "Val: " << mit->second.c_str() << endl;
    }

    cout << "一共有：" << ms.count(-2) << " 个-2！" << endl;

    /// 查找
    multimap<int,string>::const_iterator fd_it;

    fd_it = ms.find(1);

    if (fd_it != ms.end()){
        if (ms.count(1) > 1)
            cout << "个数大于1---";
        cout << "Finded! " << fd_it->first << " = " << fd_it->second.c_str() << endl;
    }else{
        cout << "Not Finded!\n" ;
    }




    return 0;
}
