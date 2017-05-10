#include <iostream>
#include <string>

using namespace std;

/*
 * inline: 内联函数, 速度快, 可以在类中明确指定inline
            也可以在外部明确指出.
            构造函数也是如此.
 */

class Screen
{
public:

    //别名
    typedef std::string::size_type index;

    //构造函数
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


//内联函数
inline char Screen::get() const
{
        return contents[cursor];
}

//内联函数
char Screen::get(index row, index col) const
{
    index r = row * width;
    return contents[r + col];
}

inline Screen::Screen(index ht, index wd, const string &str)
    :height(ht), width(wd), cursor(0), contents(str)  //初始化列表,速度快
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



