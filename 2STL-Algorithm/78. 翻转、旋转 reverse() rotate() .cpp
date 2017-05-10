#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //reverse(),����
    reverse(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //reverse_copy()
    reverse_copy(vec.begin()+1,vec.end()-2, ostream_iterator<int>(cout, " "));
    cout << endl;

    //////////////////////////////////////////////////////////////////////

    cout << "��ת��"<< endl;
    reverse_copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //��ת��rotate
    //                  *head*
    rotate(vec.begin(),vec.end()-2,vec.end());
//  rotate(vec.begin(),vec.begin()+2,vec.end());
    reverse_copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    rotate(vec.begin(), find(vec.begin(),vec.end(), 5),vec.end()); //5�ſ�ͷ
    reverse_copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
