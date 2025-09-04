#include <iostream>
#include <ctime>

using namespace std;

/**
 * Program: Matrix Border and Diagonal Sum
 * ----------------------------------------
 * Generates an N x N matrix (N must be an odd positive number),
 * prints it, then calculates the sum of:
 *  - First column
 *  - Last column
 *  - Main diagonal
 *  - Secondary diagonal
 *
 * It also prints a visual representation of the selected elements.
 */

int main() {
    int N;
    int Summa = 0;

    cout << "Enter N (odd and > 0): ";
    cin >> N;

    if (N > 0 && N % 2 != 0) {
        int Array[N][N];

        srand(time(0));

        // Fill and print matrix
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                Array[i][j] = rand() % 9 + 1;
                cout << " " << Array[i][j];
            }
            cout << endl;
        }

        cout << endl;

        // Print selected elements and calculate sum
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == 0 || j == N - 1 || i == j || i == N - j - 1) {
                    Summa += Array[i][j];
                    cout << " " << Array[i][j];
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }

        cout << endl;
        cout << ">>> Sum = " << Summa << endl;
    } else {
        cout << "Error: Please enter a positive odd number!" << endl;
    }

    return 0;
}
