#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 1) {
        cout << "No prime number less than or equal to " << N << endl;
        return 0;
    }

    int largestPrime = 0;
    int currentNumber = 2;

    while (currentNumber < N) {
        bool isPrime = true;

        for (int i = 2; i * i <= currentNumber; ++i) {
            if (currentNumber % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            largestPrime = currentNumber;
        }

        ++currentNumber;
    }

    if (largestPrime != 0) {
        cout << "The largest prime number less than or equal to " << N << " is: " << largestPrime <<endl;
    } else {
        cout << "No prime number less than or equal to " << N <<endl;
    }
      return 0;
}
