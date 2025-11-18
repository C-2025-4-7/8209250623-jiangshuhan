#include <iostream>
using namespace std;

int main() {
    char inputChar;
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
    cin >> inputChar;
    if (inputChar >= 'a' && inputChar <= 'z')
    {
        cout << (char)(inputChar - 'a' + 'A') << endl;
    }
    else {
        cout << (int)(inputChar + 1) << endl;
    }
    return 0;
}