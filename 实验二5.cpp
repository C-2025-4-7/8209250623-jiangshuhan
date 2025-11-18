#include <iostream>
using namespace std;

int main() {
     int letter = 0, space = 0, digit = 0, others = 0;
    char c;
    cout << "请输入需要分类计数的文本：";
    while ((c = cin.get())!= '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letter++;
        else if (c >= '0' && c <= '9')
            digit++;
        else if (c =='')
            space++;
        else
            others++;
    }
    cout << "字母数：" << letter << "数字数：" << digit << "空格数：" << space << "其它字符数：" << others << endl;
    return 0;
}