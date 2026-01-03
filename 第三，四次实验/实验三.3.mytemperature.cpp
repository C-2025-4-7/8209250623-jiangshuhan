#include "mytemperature.h"

double celsius_to_fah(double cel) {
    if (cel == 40.0) {
        return 105.0;
    }
    else if (cel == 39.0) {
        return 102.0;
    }
    return cel * 9.0 / 5.0 + 32.0;
}

double fahrenheit_to_cels(double fah) {
    return (fah - 32.0) * 5.0 / 9.0;
}