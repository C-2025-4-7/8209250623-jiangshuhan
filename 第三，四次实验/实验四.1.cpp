#include <iostream>
using namespace std;

int main() {
    double uniqueNums[10] = { 0 };
    int count = 0;

    cout << "请输入10个数（可重复，按回车分隔）：" << endl;
    for (int i = 0; i < 10; i++) {
        double num;
        cout << "请输入第" << i + 1 << "个数：";
        cin >> num;

        bool isExist = false;
        for (int j = 0; j < count; j++) {
            if (uniqueNums[j] == num) {
                isExist = true;
                break;
            }
        }

        if (!isExist) {
            uniqueNums[count++] = num;
        }
    }

    cout << "其中不同的数为：";
    for (int i = 0; i < count; i++) {
        if (uniqueNums[i] == (int)uniqueNums[i]) {
            cout << (int)uniqueNums[i];
        }
        else {
            cout << uniqueNums[i];
        }
        if (i != count - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}