#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "请输入一个字符：";
    cin >> ch;  
    if (ch >= 'a' && ch <= 'z') {
        char upper_ch = ch - 32;
        cout << "转换后的大写字符：" << upper_ch << endl;
    } else {
        int next_ascii = static_cast<int>(ch) + 1;
        cout << "该字符的后继字符ASCII码值：" << next_ascii << endl;
    }
    
    return 0;
}