#include <iostream>
#include <iomanip> // For formatting output
#include <cmath>   // For exp() function
using namespace std;

int main() {
    // Display table header
    cout << setw(10) << "x" << setw(20) << "y = e^(-x)" << endl;
    cout << string(30, '-') << endl;

    // Loop to compute and display values of y = e^(-x) for x = 0 to 10
    for (int x = 0; x <= 10; ++x) {
        double y = exp(-x); // Compute e^(-x)
        cout << setw(10) << x << setw(20) << y << endl;
    }

    return 0;
}
