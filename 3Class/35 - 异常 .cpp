#include <iostream>

using namespace std;

/*
    �쳣:
        try catch throw

    �쳣����:
        * ����
        * �ַ���
        * ����
*/

// ��ͳ��ʽ
double div(double n1, double n2)
{
    if (0 == n2)
    {
        return 1;
    }
    return n1 / n2;
}

// �쳣: ����
double div2(double n1, double n2)
{
    if (0 == n2)
    {
        // return 1;
        throw 1;
    }
    return n1 / n2;
}

// ��
class ErrorType{};
void test(int *t)
{
    if (NULL == t)
        throw ErrorType(); // �׳����쳣
    else
        cout << "Nothding was done!" << endl;
}

int main()
{
    // ��ͳ����
    cout << "Classic: " << div(56, 8) << endl;
    cout << "Classic: " << div(56, 0) << endl;

    try
    {
        // �п��ܳ����쳣�Ĵ���
        cout << "Exception: " << div2(8, 3) << endl;
        cout << "Exception: " << div2(8, 5) << endl;
        // ��ͬ���쳣������Ҫ���catch
        test(NULL);
    }
    catch (int error) // int: �쳣����
    {
        // �����쳣
        cout << "�쳣����: " << error << endl;
    }
    catch (ErrorType e)
    {
        // catch�������, �����쳣ִ��catch֮��ͽ�����,�������ִ��
        cout << "2nd Catch !" << endl;
    }
    catch (...)
    {
        // ����, ̫����쳣��
        // ��������Ҫ���쳣��ǰ�浥��catch
        cout << "����ץ����©��֮��!" << endl;
    }

    return 0;
}








