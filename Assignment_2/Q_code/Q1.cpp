#include <iostream>
#include <string>
//freee code camp
using namespace std;

// Global variables
int age;
double bank_balance = 0.0;  // Changed to double for consistency
int banking_days;

// Function to open an account (initialize the account with a starting balance)
void Deposite(double initialBalance) {
    if (initialBalance >= 0.0) {
        bank_balance = initialBalance;
    } else {
        bank_balance = 0.0;
        cout << "Initial balance is invalid. Setting balance to 0.0." << endl;
    }
}

// Function to get balance
double getBalance() {
    return bank_balance;
}

// Function to deposit
void deposit(double amount) {
    if (amount > 0.0) {
        bank_balance += amount;
    } else {
        cout << "Deposit amount must be positive." << endl;
    }
}

// Function to check months banked
void check_banking(int months_banked) {
    if (months_banked >= 6) {
        cout << "You can request for a loan." << endl;
    } else {
        cout << "Please bank with us for more than 6 months to get a chance to grant access for a loan." << endl;
    }
}

int main() { 
    string first_name;
    string last_name;
    string full_name;
    string answer;
    double initial_deposit;
    int months_banked;

    // Prompt user to check if they have an account
    cout << "Request for Loan: Kindly answer the following:\n";
    cout << "Do you have an account? (Yes or No): ";
    cin >> answer;

    if (answer == "No" || answer == "no") {
        // Get customer full name
        cout << "Create an account with us\n";
        cout << "Please enter your first name: ";
        cin >> first_name;
        cout << "Please enter your last name: ";
        cin >> last_name;

        // Print out account name
        full_name = first_name + " " + last_name;
        cout << "Account names are: " << full_name << endl;

        // Prompt the user to enter their age
        cout << "Please enter your age: ";
        cin >> age;

        // Prompt the user to make an initial deposit
        cout << "Please enter amount to deposit: $";
        cin >> initial_deposit;
        Deposite(initial_deposit);

        cout << "Account created successfully with an initial balance of $" << getBalance() << endl;
        cout << "Continue to bank with us to get a chance to get a loan." << endl;
    } else {
        // Existing account scenario (Additional logic can be added here for existing accounts)
        cout << "Please enter your first name: ";
        cin >> first_name;
        cout << "Please enter your last name: ";
        cin >> last_name;

        // Print out account name
        full_name = first_name + " " + last_name;
        cout << "Account names are: " << full_name << endl;

        // Prompt the user to enter their age
        cout << "Please enter your age: ";
        cin >> age;
        if (age >= 22) {
            // Print out account details
            cout << "Account of " << full_name << " with a bank balance of $" << getBalance() << endl;

            // Check balance and allow deposit if the balance is zero
            if (getBalance() == 0) {
                // Prompt the user to make a deposit
                cout << "Please enter amount to deposit: $";
                cin >> initial_deposit;
                Deposite(initial_deposit);
                cout << "New balance is: $" << getBalance() << endl;
                 // Check if balance is sufficient for loan consideration
            if (bank_balance >= 50000) {
                // Prompt user to check CRB status
                cout << "Are you present in CRB? (Yes or No): ";
                cin >> answer;
                if (answer == "yes" || answer == "Yes") {
                    cout << "You do not qualify for a loan." << endl;
                } else {
                    // Prompt user to enter months banked with the bank
                    cout << "Please enter months banked with us: ";
                    cin >> months_banked;
                    // Check if qualify for months reached
                    check_banking(months_banked);
                }
            }
            }
            }
            else {
            cout << "You do not qualify for a loan." << endl;
        }
    }

    return 0;
}
