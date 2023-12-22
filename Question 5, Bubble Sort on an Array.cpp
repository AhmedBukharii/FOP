#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 3, 6, 2, 9, 1};
    const int size = 6;

    cout << "Array before sorting:" <<endl;
    for (int num : numbers) {
        cout << num << " ";
    }
        cout << endl;

    // Bubble Sort
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    cout << "Array after sorting using Bubble Sort:" <<endl;
    for (int num : numbers) {
        cout << num << " ";
    }
        cout <<endl;

    return 0;
}
