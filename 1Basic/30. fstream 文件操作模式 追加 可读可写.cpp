#include <iostream>
#include <fstream>

using namespace std;

/*文件模式*/

int main()
{
    string str;

    ifstream inFile("file1.txt", ifstream::in);
    //  可以省略 fstream inFile("file.txt");
    inFile >> str;
    inFile.close();
    cout << str << endl;

    /// 如果文件不存在，则新建一个空文件；若已存在，则清空原内容
    //  ofstream outFile("file2.txt", ofstream::out | ofsream::trunc); //trunc截取
    ofstream outFile("file2.txt", ofstream::out | ofstream::app);
    //  ofstream outFile("file2.txt");
    outFile << "Hello World !" << endl;
    outFile.close();

    //  追加方式：ofstream outFile("file", ofstream::out | ofstream::app); //app: append

    /// 既可以输入又可以输出
    fstream IOFile("file2.txt", fstream::in | fstream::out | fstream::app | fstream::ate); //ate:at end
    //  fstream IOFile("file2.txt");
    IOFile << "fstream";
    IOFile.close();

    return 0;
}
