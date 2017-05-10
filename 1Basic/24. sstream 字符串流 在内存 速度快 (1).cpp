#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>  //字符串流

using namespace std;

/*字符串流在内存里，速度快*/

int main()
{
    string fileName, str, word;
    vector<string> vec;
    istringstream isstream;

    fileName = "book1.txt";

    ifstream inFile(fileName.c_str());

    if (!inFile){
        cout << "Can not open: " << fileName << endl;
        return -1;
    }

    while (getline(inFile, str))
        vec.push_back(str);

    inFile.close();

    for (vector<string>::const_iterator it = vec.begin(); it != vec.end(); ++it){
        //逐行打印：cout << *it << endl;

        //逐个单词打印
        isstream.str(*it);  //字符串流里的字符串
        while (isstream >> word){
            cout << word << endl;
        }
        isstream.clear();
    }


    return 0;
}
