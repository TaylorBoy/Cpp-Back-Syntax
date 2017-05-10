#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stdexcept>

using namespace std;

/*˳�������Ĳ���5*/

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "front: " << vec.front() << endl;
    cout << "back : " << vec.back()  << endl << endl;

    //����
    vector<int>::reference a = vec.front();
    vector<int>::reference b = vec.back();
    cout << "a: " << a;
    cout << "   b: " << b << endl << endl;

    //������
    cout << "��������" << *vec.begin() << "   ";
    cout << *--vec.end() << endl << endl;  //end�����һ������һ��

    //�±꣬������vector��deque
    cout << "�±꣺" << endl;  //�±�������

    cout << vec[0] << endl << vec[1] << endl << vec[2] << endl << endl;

    // vec.at(index) �±�Խ����׳��쳣
    cout << "vec.at(index): " << endl;
    cout << vec.at(0) << endl << vec.at(1) << endl << vec.at(2) << endl << endl;

    try{
        cout << vec.at(88) << endl;
    }catch(out_of_range ){
        cout << "***�±�Խ���ˣ�***\n";
    }



    return 0;
}
