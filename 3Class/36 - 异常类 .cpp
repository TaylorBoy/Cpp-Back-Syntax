#include <iostream>

using namespace std;

/*
    �쳣��
        * ��νṹ �̳ж�̬
*/

const int DefaultSize = 10;

// ��̬����
class Array
{
public :
    Array(int itsSize = DefaultSize);
    ~Array(){ delete[] pType; }

    // ���������
    int& operator[](int offset);
    const int& operator[](int offset) const;

    // ������, accessors
    int GetItsSize() const { return itsSize; }

    // �쳣��
    class xBoundary{};

    // �±�ȡֵ��Χ����
    class xSize{
    public :
        xSize(){}
        xSize(int size) : itsSize(size) {}
        ~xSize(){}
        int GetSize() const { return itsSize; }
        virtual void PrintError()
        {
            cout << "��������, �±�: " << itsSize << endl;
        }
    protected:
        int itsSize;
    };

    class xZero : public xSize{
    public :
        xZero(int size): xSize(size) {}
        virtual void PrintError()
        {
            cout << "�±겻��Ϊ: 0" << endl;
        }
    };

    class xNegative : public xSize{
    public :
        xNegative(int size) : xSize(size) {}
        virtual void PrintError()
        {
            cout << "�±겻��Ϊ����!" << endl;
        }
    };

    class xTooSmall : public xSize{
    public :
        xTooSmall(int size) : xSize(size) {}
        virtual void PrintError()
        {
            cout << "�±�̫С��: " << itsSize << endl;
        }
    };

    class xTooBig : public xSize{
    public :
        xTooBig(int size) : xSize(size) {}
        virtual void PrintError()
        {
            cout << "�±�̫����: " << itsSize << endl;
        }
    };

private:
    int * pType;
    int itsSize;

};

Array::Array(int size) : itsSize(size)
{
    // ��������ʼ��С
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
        throw xBoundary();  // �׳��쳣��
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
        cout << "�±�Խ������!" << endl;
    }
    catch (Array::xSize &e)
    {
        // ��̬
        e.PrintError();
    }
    catch (...)
    {
        cout << "����δ֪����!" << endl;
    }

    cout << a[1] << endl;

    return 0;
}




