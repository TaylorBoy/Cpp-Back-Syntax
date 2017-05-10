#include <iostream>
#include <string>
using namespace std;

//记录
class Record   /* 这是一个完整的类: 类定义,类声明 */
{


public:
    typedef std::size_t size;

    Record() :byte_count(0) {}
    Record(size s) :byte_count(s) {}
    Record(string str) :name(str), byte_count(0) {}

    size GetCount() const { return byte_count; }
    string GetName() const { return name; }

private:
    size byte_count;
    string name;  //记录名称
};

int main()
{

    Record r("Nothing !");
    cout << r.GetName() << endl;

    return 0;
}



