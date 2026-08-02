// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// -----------------------------------------------------------------------------
// OPERATIONS YOUR CALCULATOR MUST SUPPORT
// -----------------------------------------------------------------------------
//
//   1. Addition          ( + )    e.g.  10 + 3  =  13
//   2. Subtraction       ( - )    e.g.  10 - 3  =  7
//   3. Multiplication    ( * )    e.g.  10 * 3  =  30
//   4. Division          ( / )    e.g.  10 / 3  =  3.33
//   5. Modulus           ( % )    e.g.  10 % 3  =  1  (remainder)
//   6. Exponentiation    ( ^ )    e.g.  2 ^ 8   =  256
//   7. Quit
//
// -----------------------------------------------------------------------------
// HOW THE MENU SHOULD LOOK
// -----------------------------------------------------------------------------
//
//   ============================
//        SIMPLE CALCULATOR
//   ============================
//   1. Addition
//   2. Subtraction
//   3. Multiplication
//   4. Division
//   5. Modulus
//   6. Exponentiation
//   7. Quit
//   Select an operation (1-7):
//
// -----------------------------------------------------------------------------
// EXPECTED INTERACTION EXAMPLE
// -----------------------------------------------------------------------------
//
//   Select an operation (1-7): 4
//   Enter first number : 10
//   Enter second number: 3
//   Result: 10 / 3 = 3.33
//
//   Select an operation (1-7): 4
//   Enter first number : 5
//   Enter second number: 0
//   Error: Cannot divide by zero.
//
//   Select an operation (1-7): 7
//   Goodbye!
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Each arithmetic operation MUST be written as its own function.
// - Use a loop so the calculator keeps running until the user selects Quit.
// - Division by zero must be caught and handled with a clear error message
//   (do NOT let the program crash).
// - Use fixed and setprecision(2) to display results to 2 decimal places.
// - Handle invalid menu choices gracefully.
// - For exponentiation use a loop or the pow() function from <cmath>.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

void addition(double a, double b) {
    cout << fixed << setprecision(2) << "Result: " << a << " + " << b << " = " << (a + b) << endl;
}

void subtraction(double a, double b) {
    cout << fixed << setprecision(2) << "Result: " << a << " - " << b << " = " << (a - b) << endl;
}

void multiplication(double a, double b) {
    cout << fixed << setprecision(2) << "Result: " << a << " * " << b << " = " << (a * b) << endl;
}

void division(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero." << endl;
    } else {
        cout << fixed << setprecision(2) << "Result: " << a << " / " << b << " = " << (a / b) << endl;
    }
}

void modulus(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero." << endl;
    } else {
        cout << fixed << setprecision(2) << "Result: " << a << " % " << b << " = " << fmod(a, b) << endl;
    }
}

void exponentiation(double a, double b) {
    cout << fixed << setprecision(2) << "Result: " << a << " ^ " << b << " = " << pow(a, b) << endl;
}

int main() {
    int choice = 0;

    while (choice != 7) {
        cout << "\n============================" << endl;
        cout << "     SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Please enter a number from 1 to 7." << endl;
            continue;
        }

        double a, b;

        switch (choice) {
        case 1:
            cout << "Enter first number : ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            addition(a, b);
            break;
        case 2:
            cout << "Enter first number : ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            subtraction(a, b);
            break;
        case 3:
            cout << "Enter first number : ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            multiplication(a, b);
            break;
        case 4:
            cout << "Enter first number : ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            division(a, b);
            break;
        case 5:
            cout << "Enter first number : ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            modulus(a, b);
            break;
        case 6:
            cout << "Enter first number : ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            exponentiation(a, b);
            break;
        case 7:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from 1 to 7." << endl;
            break;
        }
    }

    return 0;
}

