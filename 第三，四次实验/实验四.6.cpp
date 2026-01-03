#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void count(const string& s, int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }

    for (char ch : s) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            counts[lowerCh - 'a']++;
        }
    }
}

int main() {
    string s;
    int counts[26];

    cout << "Enter a string: ";
    getline(cin, s);

    count(s, counts);

    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}