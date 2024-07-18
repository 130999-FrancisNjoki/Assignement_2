/*Write a C++ program that displays a menu with options such as: 
• Calculate the area of a circle 
• Calculate the area of a rectangle 
• Calculate the area of a triangle 
• Quit 
Implement a switch...case statement to perform the corresponding calculation based on 
the user's choice.*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    while (true) {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform calculation based on user choice
        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius;  // Area of circle = πr²
                cout << "The area of the circle is: " << area << endl;
                break;

            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = length * width;  // Area of rectangle = length * width
                cout << "The area of the rectangle is: " << area << endl;
                break;

            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = 0.5 * base * height;  // Area of triangle = 0.5 * base * height
                cout << "The area of the triangle is: " << area << endl;
                break;

            case 4:
                cout << "Quitting the program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }

        cout << endl;  // Add a blank line for better readability
    }

    return 0;
}
