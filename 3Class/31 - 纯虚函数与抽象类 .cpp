#include <iostream>
#include <stdlib.h>
using namespace std;

/*
     ���麯���������
     # ���麯��:
       virtual Type func(void) = 0;
     # ������:
       * �κΰ���һ�����߶�����麯�����඼�ǳ�����
       * ���ܴ���������Ķ���, ֻ�ܼ̳�
       * ���麯�����븲��(�Ǵ���)
    # C++�ӿ�:
      ֻ�������麯���ĳ�����
*/

/* ������, ���ܴ�����Ķ��� */
class Shape
{
public :
    Shape(){}
    // ֻҪ��������麯��, ����������Ҫ����Ϊ���
    virtual ~Shape(){}

    //���麯��, �����ʵ��, һ�㲻д����ʵ�ֹ��е�
    virtual double GetArea() = 0;
    virtual double GetPerim() = 0;
    virtual void Draw() = 0;
};

// д���ô���
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
    Shape::Draw();  // ���ø��ຯ��
}

// ����
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
    Shape::Draw();  // ����
}

// ������
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
        cout << "���Ϳ����!!`" << endl;
}


int main()
{
    int choise;
    bool fQuit = false;

    // ����, ��̬
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
