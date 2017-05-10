#include <iostream>
#include <string>
using namespace std;

/*
 * 析构函数: C++自动创建一个合成的析构函数
             * 只能有一个析构
 *
   三原则:  若写了析构函数
            就要写复制构造函数 和 赋值操作符
 *
 */

class NoName
{
public :
    //构造: 例如new一个string给指针,这时必须要delete,所以需要析构函数
    NoName():pStr(new string),i(0),d(0)
    {
        //打开文件
        //连接数据库
        //动态的分配内存
        cout << "** 构造函数被调用了! **" << endl;
    }
    //复制
    NoName(const NoName &t);
    //赋值
    NoName& operator = (const NoName &t);

    //析构, 只能有一个
    ~NoName();

private:
    string *pStr;
    int i;
    double d;
} ;


/////////////////////
//析构
NoName::~NoName()
{
    //关闭文件
    //断开数据库
    //释放动态分配的内存
    cout << "** 析构函数被调用了 **" << endl;
    delete pStr;
    pStr = NULL;
}

//复制
NoName::NoName(const NoName &t)
{
    pStr = new string;
    *pStr = *(t.pStr);
    i = t.i;
    d = t.d;
}

//赋值
NoName &NoName::operator=(const NoName &t)
{
    pStr = new string;
    *pStr = *(t.pStr);
    i = t.i;
    d = t.d;

    return *this;
}


///////////////////////////////////////
//              主函数
///////////////////////////////////////

int main()
{
    NoName n;  //一对一: 构造与析构

    NoName *p = new NoName;  //这里需要另外delete 指针p
    delete p;



    return 0;
}
