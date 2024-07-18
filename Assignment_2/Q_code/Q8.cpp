 /*Develop a program for a shopping cart that calculates the total cost after applying 
different discounts based on the purchase amount. Use if, else if, and else statements to 
determine which discount to apply.*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double purchase_amount;
    double discount = 0.0;
    double total_cost;

    // Prompt the user to enter the purchase amount
    cout << "Enter the purchase amount: $";
    cin >> purchase_amount;

    // Determine the discount based on the purchase amount
    if (purchase_amount < 50) {
        discount = 0.0;
    } else if (purchase_amount >= 50 && purchase_amount < 100) {
        discount = 0.05 * purchase_amount;  // 5% discount
    } else if (purchase_amount >= 100 && purchase_amount < 200) {
        discount = 0.10 * purchase_amount;  // 10% discount
    } else if (purchase_amount >= 200) {
        discount = 0.15 * purchase_amount;  // 15% discount
    } else {
        cout << "Invalid purchase amount entered." << endl;
        return 1;
    }

    // Calculate the total cost after applying the discount
    total_cost = purchase_amount - discount;

    // Output the results
    cout << fixed << setprecision(2);
    cout << "Purchase Amount: $" << purchase_amount << endl;
    cout << "Discount: -$" << discount << endl;
    cout << "Total Cost: $" << total_cost << endl;

    return 0;
}
