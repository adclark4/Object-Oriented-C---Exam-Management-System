#ifndef EXAM_H
#define EXAM_H

#include <string>
using std::string;

class Exam
{
public:
    // Default constructor
    Exam();

    // Constructor with parameters
    Exam(const string& name, double score);

    // Setter and getter for name
    void setName(const string& name);
    string getName() const;

    // Setter and getter for score
    void setScore(double score);
    double getScore() const;

private:
    string name; // Name of the exam
    double score; // Score of the exam
};

#endif

