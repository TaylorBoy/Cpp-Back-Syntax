#include <stdio.h>
#include <iostream>

#include <deque>  //双端队列

/*顺序容器STL deque和vector非常类似，vector只能pop_back(),
  deque既能后面也能从前面pop*/

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

	d.pop_front();  //从前面放出,
  	d.pop_back();   //从后面放出
	cout << "\n删除之后：\n";

	//使用deque的迭代器输出
	deque<int>::iterator it;
	for (it = d.begin(); it != d.end(); ++it){
		cout << "deque->" << *it << endl;
	}


	return 0;
}
