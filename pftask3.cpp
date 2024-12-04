#include <iostream>
using namespace std;

int main() {
    int numStudents, numQuizzes;

    // Input number of students and quizzes
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of quizzes: ";
    cin >> numQuizzes;

    // Define a 2D array to store scores (assuming a maximum size of 100 students and 100 quizzes)
    int scores[100][100];

    // Input scores for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter scores for student " << i + 1 << ": ";
        for (int j = 0; j < numQuizzes; j++) {
            cin >> scores[i][j];
        }
    }

    // Calculate and print average score for each quiz
    cout << "\nAverage score for each quiz:\n";
    for (int j = 0; j < numQuizzes; j++) {
        double quizSum = 0;
        for (int i = 0; i < numStudents; i++) {
            quizSum += scores[i][j];
        }
        double quizAverage = quizSum / numStudents;
        cout << "Quiz " << j + 1 << ": " << quizAverage << endl;
    }

    // Calculate and print average score for each student
    cout << "\nAverage score for each student:\n";
    for (int i = 0; i < numStudents; i++) {
        double studentSum = 0;
        for (int j = 0; j < numQuizzes; j++) {
            studentSum += scores[i][j];
        }
        double studentAverage = studentSum / numQuizzes;
        cout << "Student " << i + 1 << ": " << studentAverage << endl;
    }

    // Calculate overall class average and find the highest score
    double totalSum = 0;
    int highestScore = scores[0][0]; // Initialize with the first score
    int totalScores = numStudents * numQuizzes;

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numQuizzes; j++) {
            totalSum += scores[i][j];
            if (scores[i][j] > highestScore) {
                highestScore = scores[i][j];
            }
        }
    }

    double overallAverage = totalSum / totalScores;
    cout << "\nOverall class average: " << overallAverage << endl;
    cout << "Highest score achieved by any student on any quiz: " << highestScore << endl;

    return 0;
}
