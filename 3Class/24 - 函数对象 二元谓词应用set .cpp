#include <iostream>
#include <set>
#include <string>
#include <algorithm>
//#include <cctype>  //tolower

using namespace std;

// 不支持c++11, 自定义tolower()
char str_tolower(char c)
{
    return (char)tolower(c);
}

// set<string, 二元谓词>
class CCompareStringNoCase
{
public:
    // 不区分大小写
    bool operator()(const string &str1, const string &str2) const
    {
        string str1LowerCase;
        str1LowerCase.resize(str1.size());
        //std::string::value_type是char, tolower参数是int. 类型不匹配
        transform(str1.begin(),str1.end(),str1LowerCase.begin(),str_tolower);

        // 可以用lambda表达式: 来自csdn  jiqiang01234
        //transform(str1.begin(),str1.end(),[](unsigned char c){return std::tolower(c);});

        string str2LowerCase;
        str2LowerCase.resize(str2.size());
        transform(str2.begin(),str2.end(),str2LowerCase.begin(),str_tolower);

        return (str1LowerCase < str2LowerCase);
    }
};

int main()
{
    set<string, CCompareStringNoCase> names;

    names.insert("Taylor");
    names.insert("Jim");
    names.insert("tom");
    names.insert("HeiM");
    names.insert("cpp");

    set<string, CCompareStringNoCase>::iterator iNameFound = names.find("heim");
    if (iNameFound != names.end())
    {
        cout << "Found: " << *iNameFound << endl;
    }
    else
    {
        cout << "Not Found !" << endl;
    }

    return 0;
}
