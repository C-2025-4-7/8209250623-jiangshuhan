#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int parseHex(const char* const hexString) {
    int decimal = 0;
    int len = strlen(hexString);

    for (int i = 0; i < len; ++i) {
        char ch = toupper(hexString[i]);
        int val;

        if (ch >= '0' && ch <= '9') {
            val = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            val = 10 + (ch - 'A');
        }
        else {
            return 0;
        }

        decimal = decimal * 16 + val;
    }

    return decimal;
}

int main() {
    char hexStr[100];
    cout << "请输入16进制字符串: ";
    cin >> hexStr;

    int result = parseHex(hexStr);
    cout << "转换后的十进制数: " << result << endl;

    cout << "测试parseHex(\"A5\") = " << parseHex("A5") << endl;

    return 0;
}