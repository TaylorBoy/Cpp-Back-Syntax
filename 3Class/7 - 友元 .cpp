#include <iostream>

using namespace std;

/*
 *  友元:
        友元普通函数
        友元类
        友元的类的成员函数
 *
 */

class Screen;  //提前声明

//////////////////////////////////////
//友元对象
class MyScreen
{
public :

    int GetArea(Screen &s);

};

/////////////////////////////////////
//友元成员函数
class YourScreen
{
public :
    //友元成员函数
    string GetContent(Screen &s);

    //非友元成员函数, 不能调用Screen的成员
    void GetSomething(Screen &s);


};

///////////////////////////////////////////
// 测试类
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

    //友元函数
    friend int CalcArea(Screen &screen);
    //友元对象
    friend class MyScreen;
    //友元成员函数
    friend string YourScreen::GetContent(Screen &s);


private:
    string contents;
    index cursor;
    int height, width;
};


////////////////////// 函数定义 /////////////////////////

//这不是类的成员函数, 是普通函数
int CalcArea(Screen &screen)
{
    return screen.height * screen.width;
}


//友元对象的函数
int MyScreen::GetArea(Screen &s)
{
    return (s.height+2) * (s.width+2);
}

//友元成员函数
string YourScreen::GetContent(Screen &s)
{
    return s.contents;
}

//非友元成员函数, 不能调用Screen的成员
void YourScreen::GetSomething(Screen &s)
{
    //cout << s.contents << endl; //这是错误的
}




///////////////////////////////////////
//              主函数
///////////////////////////////////////
int main()
{
    Screen s(5, 6);
    MyScreen m;
    YourScreen y;

    cout << "友元普通函数: " << CalcArea(s) << endl;

    cout << "友元对象: " << m.GetArea(s) << endl;

    cout << "友元成员函数: " << y.GetContent(s) << endl;


    return 0;
}
