#include <iostream>
#include <string>
using namespace std;

/*return����Ӧ��*/

// ʹ����const���Σ���Ϊ�����ã����ı�ԭ���ı������ֲ����˷��ڴ�
const string& shorter(const string &str1, const string &str2)
{
    return str1.size() < str2.size() ? str1 : str2;
}

/// ע�⣺��Ҫ���ؾֲ�����Ҳ��Ҫ���ؾֲ���ָ�룩
/// �������ͨ��������ʱ�����
const string& return_err(void)
{
    string ret = "Hello";
    return ret;  //����ret�������Ǿֲ����󣬺���������ret�Ͳ������ˣ�ֱ�ӱ���
}

int main()
{
    const string ret = shorter("Ni hao", "Hello");
    cout << "shorter is : " << ret << endl;

    return 0;
}
