#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    int s[n];

    srand(time(0));
    for (int j = 0; j < n; j++) {
        s[j] = rand() % 100 + 1;
        cout << " " << s[j];
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        // Only check s[i+1] if i is not the last index
        if (i < n - 1 && s[i] % 10 == 0 && s[i + 1] % 10 != 0) {
            s[i + 1] = s[i];  // replace next element
            cout << " " << s[i];
        } else {
            cout << " " << s[i];
        }
    }

    cout << endl;
}
