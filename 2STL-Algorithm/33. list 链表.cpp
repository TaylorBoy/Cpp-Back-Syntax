#include <iostream>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
	list<int> list_int;
	
	std::list<int>::iterator it;

	//��ǰ�����
	list_int.push_front(40);  
	list_int.push_front(30);  
	list_int.push_front(20);  
	list_int.push_front(10);  
	list_int.push_back(100);  //��ĩβ���
	
	//��ǰ�����
	it = list_int.begin();
	list_int.insert(it, 55); 
	//���м����
	++it; ++it;
	list_int.insert(it, 56);
	//�ں������
	list_int.insert(list_int.end(), 66);

	//��ʾ
	for (it = list_int.begin(); it != list_int.end(); ++it){
		cout << *it << endl;
	}

	return 0;
}
