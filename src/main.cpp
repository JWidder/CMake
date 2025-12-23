#include <iostream>

#include "sub/add.h"

int main() {
    int x = 5;
    int y = 7;

    int ergebnis = add(x, y);

    cout << "Das Ergebnis ist: " << ergebnis << endl;

    return 0;
}