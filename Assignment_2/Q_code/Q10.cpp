#include <iostream>
#include <Stream>

using namespace std;

  //Golbal variable 
  double account_balance;  // Initial account balance to sor the carent account banlance 
  double daily_limit;
  double amount;
  double total_withdrawn_today = 0.0; 


//function to deposite and withdrwal
//withdrwal fucntion 
// Function to process the withdrawal
void withdraw(double &account_balance, double &total_withdrawn_today, double amount, double daily_limit) {
    // Check if the amount is positive
    if (amount <= 0) {
        cout << "Invalid input." << endl;
    } else if (amount > account_balance) {
        // Check if the account has sufficient funds
        cout << "Insufficient funds in your account." << endl;
    } else if (total_withdrawn_today + amount > daily_limit) {
        // Check if the amount exceeds the daily limit
        cout << "Withdrawal amount exceeds the daily limit of $" << daily_limit << "." << endl;
    } else {
        // Process the withdrawal
        account_balance -= amount;//this to reduss the account balance with withdrawl ammount 
        total_withdrawn_today += amount;
        cout << "Transaction successful!" << endl;
        cout << "You have withdrawn: $" << amount << endl;
        cout << "Your new account balance is: $" << account_balance << endl;
        cout << "Total amount withdrawn today: $" << total_withdrawn_today << endl;
    }
}

int main() {
    //local variables 
    account_balance = 5000.0;  // Initial account balance to sor the carent account banlance 
    daily_limit = 1000.0;  // Daily withdrawal limit to store limit 
    amount;
    total_withdrawn_today = 0.0;

    cout << "Welcome to the ATM!" << endl;

    // Prompt the user to enter the amount to withdraw
    cout << "Enter the amount to withdraw: $";
    cin >> amount;

     // Call the withdraw function
    withdraw(account_balance, total_withdrawn_today, amount, daily_limit);
    return 0;
}
