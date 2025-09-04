#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
    Program: Case-Insensitive String Comparison
    Task: Compare two strings regardless of case sensitivity.

    Input:
        - str1: first string
        - str2: second string

    Output:
        - "so'zlar teng" if the strings are equal (ignoring case)
        - "so'zlar teng emas" otherwise
*/

bool areEqualIgnoreCase(string str1, string str2) {
    if (str1.size() != str2.size()) {
        return false; // lengths differ → cannot be equal
    }

    for (size_t i = 0; i < str1.size(); i++) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1, str2;

    cout << "Enter str1: ";
    getline(cin, str1);
    cout << "Enter str2: ";
    getline(cin, str2);

    if (areEqualIgnoreCase(str1, str2)) {
        cout << "so'zlar teng" << endl;
    } else {
        cout << "so'zlar teng emas" << endl;
    }

    return 0;
}
