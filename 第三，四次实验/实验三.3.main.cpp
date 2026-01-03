#include <iostream>
#include <iomanip>
#include "mytemperature.h"

using namespace std;

int main() {
    
    cout << left << setw(12) << "Celsius"
        << setw(12) << "Fahrenheit"
        << "|   " << setw(15) << "Fahrenheit"
        << "Celsius" << endl;

    double celsius = 40.0;
    double fahrenheit = 120.0;

    
    for (int i = 0; i < 10; i++) {
        double fah = celsius_to_fah(celsius);
        double cels = fahrenheit_to_cels(fahrenheit);

        cout << fixed << setprecision(1)
            << setw(12) << celsius
            << setw(12) << fah
            << "|   " << setw(15) << fahrenheit
            << setprecision(2) << cels << endl;

        celsius -= 1.0;
        fahrenheit -= 10.0;
    }

    return 0;
}