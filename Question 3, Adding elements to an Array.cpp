#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};

    // Adding more elements to the vector
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);

    // Displaying elements of the vector
    cout << "Elements in the array:" << endl;
    for (int element : a) {
        cout << element << " ";
    }
    cout <<endl;

    return 0;
}
