/*Design a program for a cinema that calculates the ticket price based on the age of the 
customer and the type of movie (e.g., regular or 3D). Use if, else if, and else statements 
to determine the ticket price. */
#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movie_type;
    double ticket_price;

    // Get the age of the customer
    cout << "Enter the age of the customer: ";
    cin >> age;

    // Get the type of movie
    cout << "Enter the type of movie (regular or 3D): ";
    cin >> movie_type;

    // Determine the ticket price based on age and movie type
    if (movie_type == "regular") {
        if (age < 12) {
            ticket_price = 8.0;  // Child
        } else if (age >= 12 && age <= 17) {
            ticket_price = 10.0;  // Teenager
        } else if (age >= 18 && age <= 64) {
            ticket_price = 12.0;  // Adult
        } else if (age >= 65) {
            ticket_price = 6.0;  // Senior
        } else {
            cout << "Invalid age entered." << endl;
            return 1;
        }
    } else if (movie_type == "3D") {
        if (age < 12) {
            ticket_price = 10.0;  // Child
        } else if (age >= 12 && age <= 17) {
            ticket_price = 12.0;  // Teenager
        } else if (age >= 18 && age <= 64) {
            ticket_price = 15.0;  // Adult
        } else if (age >= 65) {
            ticket_price = 8.0;  // Senior
        } else {
            cout << "Invalid age entered." << endl;
            return 1;
        }
    } else {
        cout << "Invalid movie type entered." << endl;
        return 1;
    }

    // Output the ticket price
    cout << "The ticket price is: $" << ticket_price << endl;

    return 0;
}
