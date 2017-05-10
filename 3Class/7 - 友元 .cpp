#include <iostream>

using namespace std;

/*
 *  ��Ԫ:
        ��Ԫ��ͨ����
        ��Ԫ��
        ��Ԫ����ĳ�Ա����
 *
 */

class Screen;  //��ǰ����

//////////////////////////////////////
//��Ԫ����
class MyScreen
{
public :

    int GetArea(Screen &s);

};

/////////////////////////////////////
//��Ԫ��Ա����
class YourScreen
{
public :
    //��Ԫ��Ա����
    string GetContent(Screen &s);

    //����Ԫ��Ա����, ���ܵ���Screen�ĳ�Ա
    void GetSomething(Screen &s);


};

///////////////////////////////////////////
// ������
class Screen
{
public :
    typedef string::size_type index;

    Screen(int ht, int wd)
        :contents(ht*wd, 'K'),cursor(0),height(ht),width(wd)
    {  }

    int Area() const
    {
        return height * width;
    }

    //��Ԫ����
    friend int CalcArea(Screen &screen);
    //��Ԫ����
    friend class MyScreen;
    //��Ԫ��Ա����
    friend string YourScreen::GetContent(Screen &s);


private:
    string contents;
    index cursor;
    int height, width;
};


////////////////////// �������� /////////////////////////

//�ⲻ����ĳ�Ա����, ����ͨ����
int CalcArea(Screen &screen)
{
    return screen.height * screen.width;
}


//��Ԫ����ĺ���
int MyScreen::GetArea(Screen &s)
{
    return (s.height+2) * (s.width+2);
}

//��Ԫ��Ա����
string YourScreen::GetContent(Screen &s)
{
    return s.contents;
}

//����Ԫ��Ա����, ���ܵ���Screen�ĳ�Ա
void YourScreen::GetSomething(Screen &s)
{
    //cout << s.contents << endl; //���Ǵ����
}




///////////////////////////////////////
//              ������
///////////////////////////////////////
int main()
{
    Screen s(5, 6);
    MyScreen m;
    YourScreen y;

    cout << "��Ԫ��ͨ����: " << CalcArea(s) << endl;

    cout << "��Ԫ����: " << m.GetArea(s) << endl;

    cout << "��Ԫ��Ա����: " << y.GetContent(s) << endl;


    return 0;
}
