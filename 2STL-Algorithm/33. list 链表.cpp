#include <iostream>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
	list<int> list_int;
	
	std::list<int>::iterator it;

	//在前面添加
	list_int.push_front(40);  
	list_int.push_front(30);  
	list_int.push_front(20);  
	list_int.push_front(10);  
	list_int.push_back(100);  //在末尾添加
	
	//在前面插入
	it = list_int.begin();
	list_int.insert(it, 55); 
	//在中间插入
	++it; ++it;
	list_int.insert(it, 56);
	//在后面插入
	list_int.insert(list_int.end(), 66);

	//显示
	for (it = list_int.begin(); it != list_int.end(); ++it){
		cout << *it << endl;
	}

	return 0;
}
