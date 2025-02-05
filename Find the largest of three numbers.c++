#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Taking input from the user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Finding the largest number
    int largest;
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Displaying the result
    cout << "The largest number is: " << largest << endl;

    return 0;
}
