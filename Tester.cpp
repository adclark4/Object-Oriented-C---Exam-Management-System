#include <iostream>
#include "Overall.h"
#include "Exam.h"

using namespace std;

int main() {
    Overall overall("123456"); // Initialize Overall object with student ID "123456"

    char choice;
    do {
        cout << "Would you like to enter an exam name and score (y/n)? "; // Display prompt for user input
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            string examName;
            double examScore;

            cout << "What is the name of the exam? ";
            cin >> examName;
            cout << "What is the score of the exam? ";
            cin >> examScore;

            Exam newExam(examName, examScore); // Create new Exam object
            overall.createObject(newExam); // Add the new Exam object to the Overall object
        }
    } while (choice == 'y' || choice == 'Y');

    cout << "The average of the exams is: " << overall.displayAverage() << endl; // Display the average score

    return 0;
}
