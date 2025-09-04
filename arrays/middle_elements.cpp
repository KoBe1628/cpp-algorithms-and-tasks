#include <iostream>
#include <ctime>

using namespace std;

/*
    Program: Extract Middle Elements of Array
    Task: Generate a random array of odd length and extract the three
          middle elements (center and its neighbors).

    Input:
        - n: size of the array (must be odd)

    Output:
        - Original array
        - The three middle elements
*/

int main() {
    int n;

    cout << "Enter array size (odd number): ";
    cin >> n;

    if (n % 2 != 0) {
        int s[n];
        srand(time(0));

        // Fill array
        for (int j = 0; j < n; j++) {
            s[j] = rand() % 9 + 1;
            cout << " " << s[j];
        }

        cout << endl;

        // Extract middle 3 elements
        cout << "Middle elements: ";
        cout << s[n / 2 - 1] << " " << s[n / 2] << " " << s[n / 2 + 1] << endl;

    } else {
        cout << "Error: array size must be odd!" << endl;
    }
}
