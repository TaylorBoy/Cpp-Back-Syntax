#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

/* 排序算法
 * 区别：stable_sort() 函数遇到两个数相等时，不对其交换顺序
 */

bool lessLength(const string & str1, const string & str2)
{
    return str1.size() < str2.size();
}

int main()
{
    vector<string> svec;
    vector<string> svec2;

    svec.push_back("1YYY");
    svec.push_back("3Y");
    svec.push_back("2Y");
    svec.push_back("4YYY");
    svec.push_back("5YY");
    svec.push_back("8Y");
    svec.push_back("6Y");
    svec.push_back("7");
    svec.push_back("9YYYY");
    svec.push_back("10YY");
    svec.push_back("16Y");
    svec.push_back("13");
    svec.push_back("11");
    svec.push_back("14");
    svec.push_back("12Y");
    svec.push_back("15");

    copy(svec.begin(),svec.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    //sort(),不稳定
    sort(svec.begin(),svec.end(), lessLength);
    copy(svec.begin(),svec.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    //stable_sort()
    stable_sort(svec.begin(),svec.end(), lessLength);
    copy(svec.begin(),svec.end(), ostream_iterator<string>(cout, " "));
    cout << endl;




    return 0;
}
