#include <iostream>
#include <cstring>

using namespace std;

/*
 * �����±������ []: ��Ҫ��������
 *
    * �ɱ��Ա����
    * ������Ա����
 */

class Str
{
public :
    Str(char const *chars = "");

    //�±����������

    // �ɱ�
    char& operator[](size_t index) throw(Str);
    //����
    char operator[](size_t index) const throw(Str);

    void print(void);

private:
    char *ptrCh;

    static Str errorMessage;
};

Str Str::errorMessage("Subscript out of range!");

//////////////////////
// ���캯��
Str::Str(char const *chars)
{
    chars = chars ? chars : "";
    ptrCh = new char[strlen(chars) + 1];
    strcpy(ptrCh, chars);
}

//////////////////////
// �����±�: �ɱ�
char& Str::operator[](size_t index) throw(Str)
{
    cout << "\n====== none const ======\n";
    if (index >= strlen(ptrCh))
        throw errorMessage;  //�׳��쳣
    return ptrCh[index];
}

//����
char Str::operator[](size_t index) const throw(Str)
{
    cout << "\n====== const ======\n";
    if (index >= strlen(ptrCh))
        throw errorMessage;  //�׳��쳣
    return ptrCh[index];
}

///////////////////////
// print
void Str::print(void)
{
    cout << ptrCh << endl; //ptrCh -> %s, *ptrChָ���׵�ַ
}

/*--------------------------------------------*/

int main()
{
    Str s("My god !");

    cout << s[5] << endl;
    s[5] = 'X';  //�ɱ��Ա����, ���޸�
    s.print();

    Str const s2("How are you?");
    cout << s2[2] << endl;
    //s2.print();

    return 0;
}
