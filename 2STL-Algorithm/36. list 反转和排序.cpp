#include <iostream>
#include <list>

using namespace std;

/*list反转和排序*/

//显示
void display(list<int>list_a);

int main()
{
    list<int> a;
    a.push_front(45);
    a.push_front(12);
    a.push_front(56);
    a.push_front(36);
    a.push_front(22);

    cout << "原list：" << endl;
    display(a);

    a.sort();
    cout << "排序后：" << endl;
    display(a);

    a.reverse();
    cout << "反转后：" << endl;
    display(a);



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


