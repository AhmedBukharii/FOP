#include <iostream>
#include <string>
using namespace std;

    string removeDuplicates(const string& input) {
    string result;
    for (char ch : input) {
        if (result.find(tolower(ch)) == string::npos) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string inputString;

    cout << "Enter a string with both lowercase and uppercase characters: ";
    getline(std::cin, inputString);

    string result = removeDuplicates(inputString);

    cout << "Resultant string after removing duplicates: " << result <<endl;

    return 0;
}
