#include <iostream>
#include <stdlib.h>
using namespace std;

/*
     纯虚函数与抽象类
     # 纯虚函数:
       virtual Type func(void) = 0;
     # 抽象类:
       * 任何包含一个或者多个纯虚函数的类都是抽象类
       * 不能创建抽象类的对象, 只能继承
       * 纯虚函数必须覆盖(非纯虚)
    # C++接口:
      只包含纯虚函数的抽象类
*/

/* 抽象类, 不能创建类的对象 */
class Shape
{
public :
    Shape(){}
    // 只要类里存在虚函数, 析构函数就要定义为虚的
    virtual ~Shape(){}

    //纯虚函数, 看情况实现, 一般不写或者实现共有的
    virtual double GetArea() = 0;
    virtual double GetPerim() = 0;
    virtual void Draw() = 0;
};

// 写共用代码
void Shape::Draw()
{
    cout << endl << "*** Draw ***" << endl << endl;
}

class Circle : public Shape
{
public :
    Circle(int radius) : itsRadius(radius){}
    virtual ~Circle(){}
    double GetArea() { return 3.14 * itsRadius * itsRadius; }
    double GetPerim() { return 2 * 3.14 * itsRadius; }
    void Draw();

private:
    int itsRadius;
};

void Circle::Draw()
{
    Shape::Draw();  // 调用父类函数
}

// 方形
class Rectangle : public Shape
{
public :
    Rectangle(int len, int width): itsLength(len), itsWidth(width){}
    virtual ~Rectangle(){}
    double GetArea(){ return itsLength*itsWidth; }
    double GetPerim() { return 2*(itsLength+itsWidth); }
    virtual int GetLength(){ return itsLength; }
    virtual int GetWidth(){ return itsWidth; }
    void Draw();

private:
    int itsLength;
    int itsWidth;

};

void Rectangle::Draw()
{
    for (int i = 0; i < itsLength; ++i)
    {
        for (int j = 0; j < itsWidth; ++j)
            cout << "# ";
        cout << endl;
    }
    Shape::Draw();  // 父类
}

// 正方形
class Square : public Rectangle
{
public :
    Square(int len);
    Square(int len, int width);
    virtual ~Square(){}
    double GetPerim() { return 4 * GetWidth(); }

    //void Draw() { cout << "doubwo" << endl; }
};

Square::Square(int len) : Rectangle(len, len){}
Square::Square(int len, int width) : Rectangle(len, width)
{
    if (GetLength() != GetWidth())
        cout << "长和宽不相等!!`" << endl;
}


int main()
{
    int choise;
    bool fQuit = false;

    // 基类, 多态
    Shape *s;

    while (false == fQuit)
    {
        cout << "(1)Circle (2)Rectangle (3)Square (0)Quit" << endl
             << "Input > ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            s = new Circle(6);
            break;
        case 2:
            s = new Rectangle(5, 10);
            break;
        case 3:
            s = new Square(8);
            break;
        case 0:
            fQuit = true;
            break;

        default:
            cout << "Input Error !" << endl;
            exit(0);
            break;
        }

        if (false == fQuit)
        {
            s->Draw();
            delete s;
            s = NULL;
        }
    }


    return 0;
}
