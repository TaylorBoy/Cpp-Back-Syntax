#include <iostream>
#include <sstream>  //字符串流

/*字符串流在内存里，速度快*/

using namespace std;

int main()
{
    cout << "将数据输入到字符串流...\n";

    ostringstream osstream;
    osstream << "姓名: " << "douBi" << "\n" //必须加空格来区分字符串，这里在姓名后加空格
             << "年龄: " << 22 << "\n"
             << "体重: " << 88.8 << "\n";

    cout << "将内存中的字符流读出：\n" << osstream.str();

    cout << endl << "读取内存中的字符流：" << endl;

    string dump;   //丢弃的数据
    string name;
    int age;
    double weight;

    istringstream isstream(osstream.str());
    isstream >> dump;  //丢弃 姓名
    cout << "dump: " << dump << endl;
    isstream >> name;
    isstream >> dump;
    cout << "dump: " << dump << endl;
    isstream >> age;
    isstream >> dump;
    cout << "dump: " << dump << endl;
    isstream >> weight;

    cout << name << endl;
    cout << age  << endl;
    cout << weight << endl;


    return 0;
}
