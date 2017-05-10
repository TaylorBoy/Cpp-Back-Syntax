#include <iostream>

/*
  vector是一个动态数组
        是一个类模板(class template)
*/
#include <vector>

using std::vector;  //在std名称空间

using namespace std;

int main()
{
    vector<int> a;  //保存int类型数据的一个Vector，a是一个空的容器
    vector<char> b(10,'t');  //b(10), 10个空的
    a.push_back(4);
    a.push_back(77);
    a.push_back(77);
    b.push_back('Y');

    std::cout << a.size() << std::endl;
    std::cout << b.size() << std::endl;
		
	//vector使用vector::size_type作为下标类型，而数组下标的正确类型则是size_t
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
