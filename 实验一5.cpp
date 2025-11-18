#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double fahrenheit, celsius;
    cout << "ÇëÊäÈë»ªÊÏÎÂ¶È: ";
    cin >> fahrenheit;
    celsius = 5.0 * (fahrenheit - 32) / 9.0;
    cout << fixed << setprecision(2) << "ÉãÊÏÎÂ¶È: " << celsius << endl;
    return 0;
}