#include <iostream>
using namespace std;

int main() {
    double distance, time;

    // Taking input for distance traveled and time taken
    cout << "Enter the distance traveled by the aircraft (in kilometers): ";
    cin >> distance;

    cout << "Enter the time taken by the aircraft (in hours): ";
    cin >> time;

    // Calculating average speed
    double averageSpeed = distance / time;

    // Displaying the average speed
    cout << "The average speed of the aircraft is: " << averageSpeed << " kilometers per hour." <<endl;

    return 0;
}
