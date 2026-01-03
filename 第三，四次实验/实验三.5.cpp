#include<iostream>
using namespace std;
int peach(int n) {
    if (n == 10) {
        return 1;
    }
    return (peach(n + 1) + 1) * 2;
}

int main() {
    int total = peach(1);
    cout << "第一天猴子共摘了：" << total << " 个桃子" << endl;
    return 0;
}