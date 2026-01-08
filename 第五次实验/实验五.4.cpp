#include <iostream>
using namespace std;

class Student {
public:
    int id;
    int score;

    Student(int i = 0, int s = 0) : id(i), score(s) {}
};

void max(Student* p, int n) {
    if (n <= 0) {
        cout << "数组为空，无法查找！" << endl;
        return;
    }

    Student* maxPtr = p;

    for (int i = 1; i < n; i++) {
        if ((p + i)->score > maxPtr->score) {
            maxPtr = p + i;
        }
    }

    cout << "最高成绩：" << maxPtr->score << endl;
    cout << "对应学号：" << maxPtr->id << endl;
}

int main() {
    Student stuArr[5] = {
        Student(1001, 85),
        Student(1002, 92),
        Student(1003, 78),
        Student(1004, 95),
        Student(1005, 88)
    };

    max(stuArr, 5);

    return 0;
}