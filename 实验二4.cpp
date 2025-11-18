#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "请输入第一个整数: ";
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /, %): ";
    cin >> op;
    cout << "请输入第二个整数: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "除数不能为0" << endl;
        }
        else {
            cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
        }
        break;
    default:
        cout << "无效的运算符" << endl;
    }
    return 0;
}