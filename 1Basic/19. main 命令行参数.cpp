#include <iostream>
using namespace std;

/*main������ѡ��*/

/// argc ѡ�������argv ÿһ��ѡ����һ���ַ���
int main(int argc, char **argv)
{
    for (int i = 0; i < argc; ++i){
        cout << argv[i] << endl;
    }
    //argv[0] �ǳ�����

    return 0;
}


//����������֮��/*
main (int argc, char **agrv)
{
	if (3 == argc){
        cout << argv[1] << " + " << argv[2] << " = "
             << (atof(argv[1]) + atof(argv[2])) << endl;
    }
}
*/

