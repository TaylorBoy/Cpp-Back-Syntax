#include <iostream>
#include <string>

using namespace std;

/*
 * inline: ��������, �ٶȿ�, ������������ȷָ��inline
            Ҳ�������ⲿ��ȷָ��.
            ���캯��Ҳ�����.
 */

class Screen
{
public:

    //����
    typedef std::string::size_type index;

    //���캯��
    Screen(index ht, index wd):contents(ht * wd, 'A'),cursor(0),
        height(ht),width(wd)
    {  }

    Screen(index ht, index wd, const string &str);

    char get() const;

    inline char get(index row, index col) const;

private:
    string contents;
    index cursor;
    index height, width;
};


//��������
inline char Screen::get() const
{
        return contents[cursor];
}

//��������
char Screen::get(index row, index col) const
{
    index r = row * width;
    return contents[r + col];
}

inline Screen::Screen(index ht, index wd, const string &str)
    :height(ht), width(wd), cursor(0), contents(str)  //��ʼ���б�,�ٶȿ�
{}



/***********************************************/

int main()
{
    Screen s(10,100);

    Screen s_2(3, 6, "Hello Screen Class");
    cout << s_2.get() << endl;
    cout << s_2.get(1, 4) << endl;

    return 0;
}



