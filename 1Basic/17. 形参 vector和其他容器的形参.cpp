#include <iostream>

using namespace std;

/*vector和其他容器类的形参*/
#include <vector>

//引用形参
void print(vector<double> &v)
{
    vector<double>::iterator begin = v.begin();

    while (begin != v.end()){
        cout << *begin++ << endl;
    }
}

//传入容器迭代器(~常用方法~)
void print_2(vector<double>::const_iterator bgn,
             vector<double>::const_iterator end)
{
    while (bgn != end){
        cout << *bgn++ << endl;
    }
}


int main()
{
    vector<double> vec;
    vec.push_back(3.15);
    vec.push_back(5.88);
    vec.push_back(8.44);

    cout << "容器引用：\n";
    print(vec);

    cout << "\n容器迭代器：\n";
    print_2(vec.begin(), vec.end());

    return 0;
}
