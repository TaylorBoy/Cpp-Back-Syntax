#include <iostream>
#include <list>
using namespace std;

/*list的添加*/

//显示
void display(list<int>list_a, list<int>::iterator it);

int main(int argc, char *argv[])
{
	list<int> list_1, list_2;

	list<int>::iterator it;

	//在前面添加
	list_1.push_front(100);
	list_1.push_front(100);
	list_1.push_front(100);
	list_1.push_front(100);
	list_1.push_back(11);  //在末尾添加

	cout << "其他操作前: " <<  endl;
	display(list_1, it);

	//在前面插入
	it = list_1.begin();
	list_1.insert(it, 55);

	//在中间插入
	++it;
	++it;
	list_1.insert(it, 56);

	//在后面插入
	list_1.insert(list_1.end(), 66);

    cout << "\n添加之后: " <<  endl;
    display(list_1, it);

    //insert(intrator, n, m); 插入n个m
	list_1.insert(list_1.begin(), 4, 6);

    //将整个list插入
    list_2.push_back(8888);
    list_2.push_back(8888);
    list_2.push_back(8888);

    //插入list区间
    list_1.insert(it, list_2.begin(), list_2.end());
    cout << "\n添加之后: " <<  endl;
    display(list_1, it);

	return 0;
}

//显示
void display(list<int>list_a, list<int>::iterator it)
{
	cout << "[";
	for (it = list_a.begin(); it != list_a.end(); ++it){
		cout << *it << " ";
	}
    cout << "\b]\n";

}
