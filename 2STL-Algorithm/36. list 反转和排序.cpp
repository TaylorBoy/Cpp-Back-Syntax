#include <iostream>
#include <list>

using namespace std;

/*list��ת������*/

//��ʾ
void display(list<int>list_a);

int main()
{
    list<int> a;
    a.push_front(45);
    a.push_front(12);
    a.push_front(56);
    a.push_front(36);
    a.push_front(22);

    cout << "ԭlist��" << endl;
    display(a);

    a.sort();
    cout << "�����" << endl;
    display(a);

    a.reverse();
    cout << "��ת��" << endl;
    display(a);



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


