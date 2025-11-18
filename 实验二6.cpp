#include <iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;
    while (true) {
        cout << "请输入第一个正整数：";
        cin >> a;
        cout << "请输入第二个正整数：";
        cin >> b;

        if (cin.fail() || a <= 0 || b <= 0) {
            cin.clear(); 
            cin.ignore(1024, '\n');  
            cout << "错误：请输入有效的正整数！\n" << endl;
        }
        else {
            break;  
        }
    }

  
    int greatestCommonDivisor = gcd(a, b);
    int leastCommonMultiple = lcm(a, b);

    cout << "\n" << a << " 和 " << b << " 的最大公约数（GCD）：" << greatestCommonDivisor << endl;
    cout << a << " 和 " << b << " 的最小公倍数（LCM）：" << leastCommonMultiple << endl;

    return 0;
}

int gcd(int a, int b) {
    
    while (b != 0) {
        int temp = b;  
        b = a % b;     
        a = temp;      
    return a;  
}

int lcm(int a, int b) {
  
    return (a / gcd(a, b)) * b;
}