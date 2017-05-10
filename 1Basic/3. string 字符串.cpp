#include <iostream>

/*字符串*/

#include <string>

int main()
{
    char name1[] = "cyy";       //C语言的做法

    std::string name2("c++");   //c++

    std::cout << "c: " << name1 << std::endl;
    std::cout << "c++: " << name2 << std::endl;

    //c++的四种构造方法
    std::string s1;
    std::string s2("Hello S2");
    std::string s3(s2);
    std::string s4(10, 'Y');

    //最好不要这样
    std::string s5 = "Hello S5";  //先定义一个s5变量，再赋值，速度慢！

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
    std::cout << "s3: " << s3 << std::endl;
    std::cout << "s4: " << s4 << std::endl;
    std::cout << "s5: " << s5 << std::endl;

    //string
    std::cout << "\ns2: " << s2 << std::endl;       //C++ string
    std::cout << "hello: " << "hello" << std::endl;  //c风格字符串，多了'\0'结束标志

    //cin 遇到空白字符停止，（读取并忽略前面的空白字符，读取直到再次遇到空白字符停止）
    std::cin  >> s2;
    std::cout << "cin s2: " << s2 << std::endl;

    return 0;
}
