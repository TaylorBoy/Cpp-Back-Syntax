#include <iostream>

using namespace std;

/*vector��������������β�*/
#include <vector>

//�����β�
void print(vector<double> &v)
{
    vector<double>::iterator begin = v.begin();

    while (begin != v.end()){
        cout << *begin++ << endl;
    }
}

//��������������(~���÷���~)
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

    cout << "�������ã�\n";
    print(vec);

    cout << "\n������������\n";
    print_2(vec.begin(), vec.end());

    return 0;
}
