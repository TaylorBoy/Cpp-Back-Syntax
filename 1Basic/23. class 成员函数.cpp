#include <iostream>
#include <string>
using namespace std;

/*类的成员函数*/

class SalesItem{

public:
        /// 外部成员函数，必须先声明
        void printAverage() const;

        /// 类的内部成员函数
        bool isSameItem(const SalesItem &rhs) const{
            //this：当前对象，this是指针
            return (this->isbn == rhs.isbn);
        }

public:
        std::string isbn;   //书号
        unsigned allSold;   //销量
        double revenue;     //收入
};

/// 外部成员函数，必须先声明
void SalesItem::printAverage() const
{
    //this->isbn = "0000";  const放后面修饰,不能修改。
    cout << "** 平均 **\n";
}


int main()
{
    SalesItem item1, item2;

    item1.isbn = "201-7852-16";
    item1.allSold = 10;
    item1.revenue = 300.00;

    item2.isbn = "201-7852-16";
    item2.allSold = 15;
    item2.revenue = 450.00;

    if (item1.isSameItem(item2)){
        cout << "这两个item是  一样的！\n";
    }else{
        cout << "这两个item是不一样的！\n";
    }

    item1.printAverage();

    return 0;
}
