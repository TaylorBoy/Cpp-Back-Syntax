#include <iostream>

using namespace std;

/*
    异常类
        * 层次结构 继承多态
*/

const int DefaultSize = 10;

// 动态数组
class Array
{
public :
    Array(int itsSize = DefaultSize);
    ~Array(){ delete[] pType; }

    // 运算符重载
    int& operator[](int offset);
    const int& operator[](int offset) const;

    // 访问器, accessors
    int GetItsSize() const { return itsSize; }

    // 异常类
    class xBoundary{};

    // 下标取值范围问题
    class xSize{
    public :
        xSize(){}
        xSize(int size) : itsSize(size) {}
        ~xSize(){}
        int GetSize() const { return itsSize; }
        virtual void PrintError()
        {
            cout << "发生错误, 下标: " << itsSize << endl;
        }
    protected:
        int itsSize;
    };

    class xZero : public xSize{
    public :
        xZero(int size): xSize(size) {}
        virtual void PrintError()
        {
            cout << "下标不能为: 0" << endl;
        }
    };

    class xNegative : public xSize{
    public :
        xNegative(int size) : xSize(size) {}
        virtual void PrintError()
        {
            cout << "下标不能为负数!" << endl;
        }
    };

    class xTooSmall : public xSize{
    public :
        xTooSmall(int size) : xSize(size) {}
        virtual void PrintError()
        {
            cout << "下标太小了: " << itsSize << endl;
        }
    };

    class xTooBig : public xSize{
    public :
        xTooBig(int size) : xSize(size) {}
        virtual void PrintError()
        {
            cout << "下标太大了: " << itsSize << endl;
        }
    };

private:
    int * pType;
    int itsSize;

};

Array::Array(int size) : itsSize(size)
{
    // 检查数组初始大小
    if (size == 0)
        throw xZero(size);
    else if (size < 0)
        throw xNegative(size);
    else if (size < 10)
        throw xTooSmall(size);
    else if (size > 30000)
        throw xTooBig(size);

    pType = new int[size];
    // init
    for (int i = 0; i < size; ++i)
        pType[i] = 0;

}

int& Array::operator[](int offset)
{
    int size = this->GetItsSize();
    if (offset >= 0 && offset < size)
        return pType[offset];
    else
        throw xBoundary();  // 抛出异常类
}

int main()
{
    Array a;
    a[1] = 88;

    try
    {
        Array b(10);
        //a[100] = 99;
    }
    catch (Array::xBoundary e)
    {
        cout << "下标越界了啦!" << endl;
    }
    catch (Array::xSize &e)
    {
        // 多态
        e.PrintError();
    }
    catch (...)
    {
        cout << "发生未知错误!" << endl;
    }

    cout << a[1] << endl;

    return 0;
}




