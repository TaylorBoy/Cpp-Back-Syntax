#include <iostream>
#include <fstream>

using namespace std;

/*文件流对象的使用*/

int main()
{
    ofstream outFile("test.txt");
    outFile << "wo le ge cao\nni ge dan dan!";
    outFile.close();

    string fileName("main.cpp"); //必须是风格字符串
    ifstream inFile(fileName.c_str());
///    ifstream infile; 没有绑定文件
///    infile.open(file.c_str());  //绑定

    //逐个读取
    cout << "第二次读取文件：\n";
    string str;
    while (inFile >> str ){
        cout << str << endl;
    }
    inFile.close();  //inFile流状态：EOF
    inFile.clear();  //恢复流状态，才能更好操作新的文件

    //逐个读取
    inFile.open("test.txt");
    cout << "\n第二次读取文件：\n\n";
    while (inFile >> str){
        cout << str << endl;
    }
    inFile.close();
    inFile.clear();


    return 0;
}
