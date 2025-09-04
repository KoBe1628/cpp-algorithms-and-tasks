#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

/*
    Program: Right Triangle Calculator
    Task: Given the lengths of two legs (katets) of a right triangle,
          calculate the hypotenuse and the perimeter.

    Input:
        - a: first leg length
        - b: second leg length

    Output:
        - Hypotenuse (c)
        - Perimeter (P = a + b + c)
*/

void katet(int a, int b) {
    int c = sqrt((a * a) + (b * b)); // Hypotenuse
    int P = a + b + c;               // Perimeter

    cout << "Hypotenuse: " << c << endl;
    cout << "Perimeter: " << P << endl;
}

int main() {
    int a, b;

    cout << "Enter leg a: ";
    cin >> a;
    cout << "Enter leg b: ";
    cin >> b;

    katet(a, b);
}
