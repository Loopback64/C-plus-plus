#include <iostream>
#include <cmath> // Include the cmath header for M_PI

using namespace std;

int main() {
    double radius, volume;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate volume using the corrected formula:
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3); // Use pow(radius, 3) for cubic power

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}








