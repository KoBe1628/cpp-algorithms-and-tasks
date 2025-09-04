#include <iostream>
#include <string>

using namespace std;

/*
    Program: Concatenate Without First Character
    Task: Given two strings, remove the first character from each and
          return the concatenation of the remaining parts.

    Input:
        - str1: first string (length >= 1)
        - str2: second string (length >= 1)

    Output:
        - Concatenated string without the first characters of both inputs
*/

string concatenate_without_first(string str1, string str2) {
    string result;

    result += str1.substr(1); // substring from index 1 to end
    result += str2.substr(1);

    return result;
}

int main() {
    string str1, str2;

    cout << "Enter str1: ";
    getline(cin, str1);
    cout << "Enter str2: ";
    getline(cin, str2);

    if (str1.size() >= 1 && str2.size() >= 1) {
        cout << concatenate_without_first(str1, str2) << endl;
    } else {
        cout << "Har ikkala so'zning uzunligi kamida 1 bo'lishi shart!" << endl;
    }

    return 0;
}
