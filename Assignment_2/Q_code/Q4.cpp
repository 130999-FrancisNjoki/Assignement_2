#include <iostream>

using namespace std;

int main() {
    //local variable 
    double num1, num2;

    // Get two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Use switch case to determine the maximum number
    switch ((num1 > num2) - (num1 < num2)) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case -1:
            cout << "The maximum number is: " << num2 << endl;
            break;
        case 0:
            cout << "Both numbers are equal: " << num1 << endl;
            break;
        default:
            cout << "An error occurred." << endl;
    }

    return 0;
}
