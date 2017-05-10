#include <iostream>
#include <list>
using namespace std;

/*list�����*/

//��ʾ
void display(list<int>list_a, list<int>::iterator it);

int main(int argc, char *argv[])
{
	list<int> list_1, list_2;

	list<int>::iterator it;

	//��ǰ�����
	list_1.push_front(100);
	list_1.push_front(100);
	list_1.push_front(100);
	list_1.push_front(100);
	list_1.push_back(11);  //��ĩβ���

	cout << "��������ǰ: " <<  endl;
	display(list_1, it);

	//��ǰ�����
	it = list_1.begin();
	list_1.insert(it, 55);

	//���м����
	++it;
	++it;
	list_1.insert(it, 56);

	//�ں������
	list_1.insert(list_1.end(), 66);

    cout << "\n���֮��: " <<  endl;
    display(list_1, it);

    //insert(intrator, n, m); ����n��m
	list_1.insert(list_1.begin(), 4, 6);

    //������list����
    list_2.push_back(8888);
    list_2.push_back(8888);
    list_2.push_back(8888);

    //����list����
    list_1.insert(it, list_2.begin(), list_2.end());
    cout << "\n���֮��: " <<  endl;
    display(list_1, it);

	return 0;
}

//��ʾ
void display(list<int>list_a, list<int>::iterator it)
{
	cout << "[";
	for (it = list_a.begin(); it != list_a.end(); ++it){
		cout << *it << " ";
	}
    cout << "\b]\n";

}
