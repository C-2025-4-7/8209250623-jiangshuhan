#include <iostream>
using namespace std;
int main() {
    int j = 0; // 记录天数
    double sum = 0; // 总费用
    for (int i = 2; i <= 100; i *= 2) {
        sum = sum + i * 0.8;
        j++;
    }
    double average = sum / j;
    cout << "平均每天花" << average << "元" << endl;
    return 0;
}