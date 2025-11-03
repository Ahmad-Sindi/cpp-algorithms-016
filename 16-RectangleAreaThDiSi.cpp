// Algorithm Challenge
// 16 – Rectangle Area Through Diagonal and Side

#include <iostream>
#include <cmath> // Required for sqrt() function
using namespace std;

int main()
{
    float a, b, area; // a = side, b = diagonal, area = rectangle area

    // Ask the user to enter the side length
    cout << "Enter the side length: ";
    cin >> a;

    // Ask the user to enter the diagonal length
    cout << "Enter the diagonal length: ";
    cin >> b;

    // Validate input: the diagonal must be greater than the side
    if (b <= a)
    {
        cout << "Invalid input! The diagonal must be greater than the side." << endl;
        return 1; // Exit the program if input is invalid
    }

    // Calculate the area using the Pythagorean theorem
    // Formula: area = a * sqrt(b^2 - a^2)
    area = a * sqrt((b * b) - (a * a));

    // Display the calculated area
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
