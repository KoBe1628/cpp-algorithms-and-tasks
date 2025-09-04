#include <iostream>
#include <ctime>

using namespace std;

/*
    Program: Replace Maximum Element in Matrix
    Task: Generate a matrix of random numbers, find the maximum value,
          and replace all occurrences of it with 0.

    Input:
        - n1: number of rows
        - n2: number of columns

    Output:
        - Original matrix
        - Matrix after replacing max elements with 0
*/

int main() {
    int n1, n2;
    int max_value = 0;

    cout << "Enter rows (n1): ";
    cin >> n1;
    cout << "Enter cols (n2): ";
    cin >> n2;

    int s[n1][n2];
    srand(time(0));

    // Fill and print matrix
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            s[i][j] = rand() % 9 + 1;
            cout << " " << s[i][j];
            if (max_value < s[i][j]) {
                max_value = s[i][j];
            }
        }
        cout << endl;
    }

    cout << endl;

    // Replace max with 0 and print
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (s[i][j] == max_value) {
                s[i][j] = 0;
            }
            cout << " " << s[i][j];
        }
        cout << endl;
    }
}
