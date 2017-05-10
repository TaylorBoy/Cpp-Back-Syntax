#include <iostream>
#include <set>
#include <string>
#include <algorithm>
//#include <cctype>  //tolower

using namespace std;

// ��֧��c++11, �Զ���tolower()
char str_tolower(char c)
{
    return (char)tolower(c);
}

// set<string, ��Ԫν��>
class CCompareStringNoCase
{
public:
    // �����ִ�Сд
    bool operator()(const string &str1, const string &str2) const
    {
        string str1LowerCase;
        str1LowerCase.resize(str1.size());
        //std::string::value_type��char, tolower������int. ���Ͳ�ƥ��
        transform(str1.begin(),str1.end(),str1LowerCase.begin(),str_tolower);

        // ������lambda���ʽ: ����csdn  jiqiang01234
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
