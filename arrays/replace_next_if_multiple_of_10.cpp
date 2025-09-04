#include <iostream>
#include <ctime>

using namespace std;

/*
    Program: Replace Next If Multiple of 10
    Task: Generate a random array and replace the next element with
          the current one if the current is divisible by 10 and the
          next is not.

    Input:
        - n: size of the array

    Output:
        - Original array
        - Modified array after replacements
*/

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int s[n];
    srand(time(0));

    // Fill and print
    for (int j = 0; j < n; j++) {
        s[j] = rand() % 100 + 1;
        cout << " " << s[j];
    }

    cout << endl;

    // Apply replacement rule
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && s[i] % 10 == 0 && s[i + 1] % 10 != 0) {
            s[i + 1] = s[i];
            cout << " " << s[i];
        } else {
            cout << " " << s[i];
        }
    }

    cout << endl;
}
