#include <iostream>
#include <string>
using namespace std;

//��¼
class Record   /* ����һ����������: �ඨ��,������ */
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
    string name;  //��¼����
};

int main()
{

    Record r("Nothing !");
    cout << r.GetName() << endl;

    return 0;
}



