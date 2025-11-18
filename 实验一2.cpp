#include <iostream>
using namespace std;

int main() {
    double radius, height, volume;
    const double PI = 3.14159;
    cout << "请输入圆锥的底面半径: ";
    cin >> radius;
    cout << "请输入圆锥的高度: ";
    cin >> height;
    volume = (1.0 / 3) * PI * radius * radius * height;
    cout << "圆锥的体积是: " << volume << endl;
    return 0;
}