#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    if (str1 == str2) {
        // If the strings are equal, rotating one string to make them unequal
         rotate(str1.begin(), str1.begin() + 1, str1.end());

        cout << "Strings were equal. Rotating one string: " << str1 <<endl;
        cout << "Original second string: " << str2 <<endl;
    } else {
        cout << "Strings are already unequal." <<endl;
    }

    return 0;
}
