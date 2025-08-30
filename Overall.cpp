#include "Overall.h"
#include "Exam.h"

// Constructor to initialize Overall object with student ID and count of exams taken
Overall::Overall(string _id) : id(_id), count(0) {}

// Function to add an Exam object to the examArray
bool Overall::createObject(Exam exam) {
    if (count < 5) {
        examArray[count++] = exam; // Add the Exam object to the examArray
        return true; 
    }
    else {
        return false; 
    }
}

// Function to calculate and return the average score of all exams
double Overall::displayAverage() {
    double sum = 0.0;
    // Calculate the sum of all exam scores
    for (int i = 0; i < count; ++i) {
        sum += examArray[i].getScore();
    }
    // Return the average score (if count is 0, return 0 to avoid division by zero)
    return (count == 0) ? 0.0 : (sum / count);
}

// Function to get the count of exams taken
int Overall::getCount() {
    return count; 
}
