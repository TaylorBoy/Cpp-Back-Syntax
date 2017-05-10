#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/*字符串流*/

int main()
{
    //cout是流对象，ostream
    cout << "Hello cout" << endl;

    //outFile是文件输出流对象
    ofstream outFile("text.txt");
    outFile << "Hello ofstream" << endl;
    outFile.close();

    //字符串输出流
    ostringstream outSS;
    outSS << "hello ostringstream!" << endl;

    cout << "显示字符串流里面的字符串：" << outSS.str() << endl;

    return 0;
}
