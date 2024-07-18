#include <iostream>
#include <string>

using namespace std;

int main() {
    //lcoal varivable decalaration 
    string full_name;
    string course;
    int score;
    char grade;

    // Get student details inticilization 
    cout << "Enter the full name of the student: ";
    cin>>full_name; 
    cout << "Enter the course name: ";
    cin>> course;
    cout << "Kindly intput the score of the student: ";
    cin >> score;

    // Determine the grade based on the score
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40 ) {
        grade = 'D';
    }else if (score <= 40 ) {
        grade = 'F';
    }else{
        cout<<"invalid marks ";
    }
    // Output the full name and grade of the student
    cout << "Student Name: " << full_name << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
