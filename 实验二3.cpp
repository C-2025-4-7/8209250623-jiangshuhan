#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "请输入三角形的三条边长：" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "这是一个三角形，";
        if (a == b || a == c || b == c) {
            cout << "且为等腰三角形，周长为" << fixed << setprecision(2) << a + b + c << endl;
        } else {
            cout << "且为普通三角形，周长为" << fixed << setprecision(2) << a + b + c << endl;
        }
    } else {
        cout << "这不是一个三角形" << endl;
    }
    return 0;
}