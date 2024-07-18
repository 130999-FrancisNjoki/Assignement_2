#include <iostream>
#include <string>

using namespace std;

int main() {
    // Local variable declaration
    string full_name;
    string course;
    int score;
    char grade;

    // Get student details
    cout << "Enter the full name of the student: "; 
    cin >> full_name; 
    cout << "Enter the course name: ";
    cin >> course; 
    cout << "Kindly input the score of the student: ";
    cin >> score;

    // Determine the grade based on the score using switch case
    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            if (score < 40 && score >= 0) {
                grade = 'F';
            } else {
                cout << "Invalid score entered." << endl;
                return 1; // Exit the program with an error code
            }
    }

    // Output the full name and grade of the student
    cout << "Student Name: " << full_name << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
