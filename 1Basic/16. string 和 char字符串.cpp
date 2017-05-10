#include <iostream>
#include <vector>
#include <string>
#include <cstring>

/*string��char�ַ���*/

using namespace std;

int main()
{
    //string
    string str;
    vector<string> vec;

    cout << "Input strings(Ctrl+Z to stop):" << endl;
    while (cin >> str){
        vec.push_back(str);
    }

    //char
    char **s = new char*[vec.size()];

    size_t index = 0;
    for (vector<string>::iterator it = vec.begin(); it != vec.end(); ++it){
        char *sp = new char[(*it).size()+1];
        strcpy(sp, (*it).c_str());
        s[index++] = sp;
    }

    cout << "Strnig: " << endl;
    for (int i = 0; i < vec.size(); ++i){
        cout << s[i] << endl;
    }

    //��new��Ҫ��delete
    for (int i = 0; i < vec.size(); ++i){
        delete[] s[i];
    }
    delete[] s;

    return 0;
}
