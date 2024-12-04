#include <iostream>
using namespace std;

// Function to compute attendance and assess eligibility for exams
void calculateAttendance(int attended, int total) {
    if (total == 0) {
        cout << "Error: Total classes cannot be zero." << endl;
        return;
    }

    int attendancePercentage = (attended * 100) / total;
    cout << "You attended " << attended << " out of " << total << " classes." << endl;
    cout << "Attendance Percentage: " << attendancePercentage << "%" << endl;

    if (attendancePercentage >= 80) {
        cout << "You are eligible to take the exam." << endl;
    } else {
        cout << "You are not eligible to take the exam." << endl;
    }
}

int main() {
    int scheduledClasses, classesAttended;

    cout << "Enter total scheduled classes: ";
    cin >> scheduledClasses;
    cout << "Enter classes attended: ";
    cin >> classesAttended;

    if (scheduledClasses < 0 || classesAttended < 0) {
        cout << "Error: Numbers cannot be negative." << endl;
        return 1;
    }
    if (classesAttended > scheduledClasses) {
        cout << "Error: Attended classes cannot exceed scheduled classes." << endl;
        return 1;
    }

    calculateAttendance(classesAttended, scheduledClasses);
    return 0;
}