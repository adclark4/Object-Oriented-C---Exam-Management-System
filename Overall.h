#ifndef OVERALL_H
#define OVERALL_H

#include "Exam.h"
#include<string>
using namespace std;

class Overall
{
public:
    Overall(string _id);
    bool createObject(Exam exam); // Function to add an exam object
    double displayAverage(); // Function to calculate and return the average score
    int getCount(); // Getter function for the count member variable

private:
    string id;
    int count;
    Exam examArray[5];
};

#endif
