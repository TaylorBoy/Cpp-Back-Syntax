#include <stdio.h>
#include <iostream>

#include <deque>  //˫�˶���

/*˳������STL deque��vector�ǳ����ƣ�vectorֻ��pop_back(),
  deque���ܺ���Ҳ�ܴ�ǰ��pop*/

using namespace std;

int main(int argc, char *argv[])
{
	deque<int> d;

	for (int i = 0; i < 8; ++i){
		d.push_back(i*i);
	}

	for (size_t count = 0; count < d.size(); ++count){
		cout << "deque[" << count << "] = " << d[count] << endl;
	}

	d.pop_front();  //��ǰ��ų�,
  	d.pop_back();   //�Ӻ���ų�
	cout << "\nɾ��֮��\n";

	//ʹ��deque�ĵ��������
	deque<int>::iterator it;
	for (it = d.begin(); it != d.end(); ++it){
		cout << "deque->" << *it << endl;
	}


	return 0;
}
