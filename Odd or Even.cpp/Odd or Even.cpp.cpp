// Odd or Even.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Include the iostream library for input/output operations

using namespace std;

int main() {
    int number;  // Declare an integer variable to store the user's input

    // Prompt the user to enter an integer
    cout << "Enter a number: ";
    cin >> number;  // Store the user's input in the variable 'number'

    // Check if the number is even or odd using the modulo operator
    if (number % 2 == 0) {  // If the remainder when divided by 2 is 0, the number is even
        cout << number << " is an even number." << endl;  // Display the result to the user
    }
    else {  // If the remainder when divided by 2 is not 0, the number is odd
        cout << number << " is an odd number." << endl;  // Display the result to the user
    }

    return 0;  // End of the program
}