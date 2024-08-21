#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    string usn;
    int marks[3];
    int totalMarks;
};

void displayStudentDetails(const Student& student) {
    cout << "Name: " << student.name << endl;
    cout << "USN: " << student.usn << endl;
    cout << "Marks: ";
    for (int i = 0; i < 3; ++i) {
        cout << student.marks[i] << " ";
    }
    cout << endl;
    cout << "Total Marks: " << student.totalMarks << endl;
}

int main() {
    Student student;

    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student USN: ";
    getline(cin, student.usn);

    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; ++i) {
        cin >> student.marks[i];
        student.totalMarks += student.marks[i];
    }

    displayStudentDetails(student);

    return 0;
}
