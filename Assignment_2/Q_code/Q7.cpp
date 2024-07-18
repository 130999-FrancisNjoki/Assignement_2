/*Write a program for a library that calculates the late fee for returning a book. The fine 
varies based on the number of days late and the type of book (e.g., regular, children's, 
or reference). Use if, else if, and else statements to determine the fine amount. */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string book_type;
    int days_late;
    double fine = 0.0;

    // Get the type of book from the user
    cout << "Enter the type of book (regular, children, reference): ";
    cin >> book_type;

    // Get the number of days late from the user
    cout << "Enter the number of days late: ";
    cin >> days_late;

    // Calculate the fine based on the book type and days late
    if (book_type == "regular") {
        if (days_late <= 0) {
            fine = 0.0;
        } else if (days_late <= 5) {
            fine = 0.50 * days_late;  // $0.50 per day for the first 5 days
        } else {
            fine = 2.50 + 0.75 * (days_late - 5);  // $0.75 per day after the first 5 days
        }
    } else if (book_type == "children") {
        if (days_late <= 0) {
            fine = 0.0;
        } else if (days_late <= 7) {
            fine = 0.25 * days_late;  // $0.25 per day for the first 7 days
        } else {
            fine = 1.75 + 0.50 * (days_late - 7);  // $0.50 per day after the first 7 days
        }
    } else if (book_type == "reference") {
        if (days_late <= 0) {
            fine = 0.0;
        } else {
            fine = 1.00 * days_late;  // $1.00 per day for reference books
        }
    } else {
        cout << "Invalid book type entered." << endl;
        return 1;
    }

    // Output the fine amount
    cout << "The fine for returning the " << book_type << " book " << days_late << " days late is: $" << fine << endl;

    return 0;
}
