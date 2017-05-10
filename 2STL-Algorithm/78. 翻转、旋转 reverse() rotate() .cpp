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

    //reverse(),反向
    reverse(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //reverse_copy()
    reverse_copy(vec.begin()+1,vec.end()-2, ostream_iterator<int>(cout, " "));
    cout << endl;

    //////////////////////////////////////////////////////////////////////

    cout << "旋转："<< endl;
    reverse_copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //旋转，rotate
    //                  *head*
    rotate(vec.begin(),vec.end()-2,vec.end());
//  rotate(vec.begin(),vec.begin()+2,vec.end());
    reverse_copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    rotate(vec.begin(), find(vec.begin(),vec.end(), 5),vec.end()); //5放开头
    reverse_copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
