#include <iostream>
#include <list>
using namespace std;

/*list的删除*/

//显示
void display(list<int>list_a);

int main()
{
    list<int> list_a;
    list<int>::iterator it;

    list_a.push_front(400);
    list_a.push_front(300);

    //insert返回一个迭代器
    it = list_a.insert(list_a.begin(), 222);
    list_a.push_front(100);

    cout << "删除前：\n";
    display(list_a);

    //删除
    list_a.erase(it);
    //list_a.erase(it, list_a.end()); //从it_1到it_2，前包后不包

    cout << "删除后：\n";
    display(list_a);


    return 0;
}

//显示
void display(list<int>list_a)
{
    list<int>::const_iterator it;

    cout << "[";
	for (it = list_a.begin(); it != list_a.end(); ++it){
		cout << *it << " ";
	}
    cout << "\b]\n";
}
