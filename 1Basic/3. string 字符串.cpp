#include <iostream>

/*�ַ���*/

#include <string>

int main()
{
    char name1[] = "cyy";       //C���Ե�����

    std::string name2("c++");   //c++

    std::cout << "c: " << name1 << std::endl;
    std::cout << "c++: " << name2 << std::endl;

    //c++�����ֹ��췽��
    std::string s1;
    std::string s2("Hello S2");
    std::string s3(s2);
    std::string s4(10, 'Y');

    //��ò�Ҫ����
    std::string s5 = "Hello S5";  //�ȶ���һ��s5�������ٸ�ֵ���ٶ�����

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
    std::cout << "s3: " << s3 << std::endl;
    std::cout << "s4: " << s4 << std::endl;
    std::cout << "s5: " << s5 << std::endl;

    //string
    std::cout << "\ns2: " << s2 << std::endl;       //C++ string
    std::cout << "hello: " << "hello" << std::endl;  //c����ַ���������'\0'������־

    //cin �����հ��ַ�ֹͣ������ȡ������ǰ��Ŀհ��ַ�����ȡֱ���ٴ������հ��ַ�ֹͣ��
    std::cin  >> s2;
    std::cout << "cin s2: " << s2 << std::endl;

    return 0;
}
