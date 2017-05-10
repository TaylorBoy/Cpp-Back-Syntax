#include <iostream>
#include <list>
using namespace std;

/*list��ɾ��*/

//��ʾ
void display(list<int>list_a);

int main()
{
    list<int> list_a;
    list<int>::iterator it;

    list_a.push_front(400);
    list_a.push_front(300);

    //insert����һ��������
    it = list_a.insert(list_a.begin(), 222);
    list_a.push_front(100);

    cout << "ɾ��ǰ��\n";
    display(list_a);

    //ɾ��
    list_a.erase(it);
    //list_a.erase(it, list_a.end()); //��it_1��it_2��ǰ���󲻰�

    cout << "ɾ����\n";
    display(list_a);


    return 0;
}

//��ʾ
void display(list<int>list_a)
{
    list<int>::const_iterator it;

    cout << "[";
	for (it = list_a.begin(); it != list_a.end(); ++it){
		cout << *it << " ";
	}
    cout << "\b]\n";
}
