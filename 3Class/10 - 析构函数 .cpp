#include <iostream>
#include <string>
using namespace std;

/*
 * ��������: C++�Զ�����һ���ϳɵ���������
             * ֻ����һ������
 *
   ��ԭ��:  ��д����������
            ��Ҫд���ƹ��캯�� �� ��ֵ������
 *
 */

class NoName
{
public :
    //����: ����newһ��string��ָ��,��ʱ����Ҫdelete,������Ҫ��������
    NoName():pStr(new string),i(0),d(0)
    {
        //���ļ�
        //�������ݿ�
        //��̬�ķ����ڴ�
        cout << "** ���캯����������! **" << endl;
    }
    //����
    NoName(const NoName &t);
    //��ֵ
    NoName& operator = (const NoName &t);

    //����, ֻ����һ��
    ~NoName();

private:
    string *pStr;
    int i;
    double d;
} ;


/////////////////////
//����
NoName::~NoName()
{
    //�ر��ļ�
    //�Ͽ����ݿ�
    //�ͷŶ�̬������ڴ�
    cout << "** ���������������� **" << endl;
    delete pStr;
    pStr = NULL;
}

//����
NoName::NoName(const NoName &t)
{
    pStr = new string;
    *pStr = *(t.pStr);
    i = t.i;
    d = t.d;
}

//��ֵ
NoName &NoName::operator=(const NoName &t)
{
    pStr = new string;
    *pStr = *(t.pStr);
    i = t.i;
    d = t.d;

    return *this;
}


///////////////////////////////////////
//              ������
///////////////////////////////////////

int main()
{
    NoName n;  //һ��һ: ����������

    NoName *p = new NoName;  //������Ҫ����delete ָ��p
    delete p;



    return 0;
}
