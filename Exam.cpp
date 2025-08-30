#include "Exam.h"

// Default constructor
Exam::Exam() : name(""), score(0.0) {}

// Constructor with parameters
Exam::Exam(const string& name, double score) : name(name), score(score) {}

// Setter for name
void Exam::setName(const string& name) {
    this->name = name;
}

// Getter for name
string Exam::getName() const {
    return name;
}

// Setter for score
void Exam::setScore(double score) {
    this->score = score;
}

// Getter for score
double Exam::getScore() const {
    return score;
}
