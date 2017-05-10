#include <iostream>
#include <bitset>
#include <string>
#include <stdexcept>  // �쳣
using namespace std;

/*
    ��׼�쳣
    * exception
    * runtime_error
    * rang_error
    * overflow_error
    * underflow_error
    * logic_error
    * invalid_argument      : ��������
    * length_error
    * out_of_range          : throw out_of_range("Out of range !");
    * bad_alloc             : new
*/


void test(int i)
{
    if (i < 0 || i > 100)
        throw out_of_range("������Χ����!!");
    cout << "�ոպ�!!" << endl;
}

int main()
{
    try{
        // invalid_argument
        //string s("10H10101");
        //bitset<10> b(s);
        cout << "bitset ok!" << endl;

        // out_of_range
        test(999);
    }
    catch (invalid_argument err)
    {
        cout << "Bitset error: " << err.what() << endl;
    }
    catch (out_of_range err)
    {
        cout << "test() error: " << err.what() << endl;
    }

    return 0;
}
