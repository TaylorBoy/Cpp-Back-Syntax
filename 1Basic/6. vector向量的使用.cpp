#include <iostream>

/*
  vector��һ����̬����
        ��һ����ģ��(class template)
*/
#include <vector>

using std::vector;  //��std���ƿռ�

using namespace std;

int main()
{
    vector<int> a;  //����int�������ݵ�һ��Vector��a��һ���յ�����
    vector<char> b(10,'t');  //b(10), 10���յ�
    a.push_back(4);
    a.push_back(77);
    a.push_back(77);
    b.push_back('Y');

    std::cout << a.size() << std::endl;
    std::cout << b.size() << std::endl;
		
	//vectorʹ��vector::size_type��Ϊ�±����ͣ��������±����ȷ��������size_t
    for (vector<char>::size_type i = 0; i < b.size(); ++i){
        std::cout << b[i] << "->";
    }
    std::cout << endl;

    a[1] = 100;
    if (a[1] == a[2]){
        std::cout << "a[1] == a[2]" << std::endl;
    }else {
        std::cout << "a[1] = " <<a[1] << std::endl;
    }


    return 0;
}
