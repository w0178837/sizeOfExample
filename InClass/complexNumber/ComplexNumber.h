//
// Created by inet2005 on 10/3/17.
//

#ifndef COMPLEXNUMBER_COMPLEXNUMBER_H
#define COMPLEXNUMBER_COMPLEXNUMBER_H

#include <iostream>
#include <sstream>

using namespace std;

class ComplexNumber
{
public:
    double real;
    double imaginary;


    ComplexNumber();
    ComplexNumber(double, double); //constructor with arguments
    ComplexNumber(string); // constructor with arg to parse string like "a+bi"

    ComplexNumber operator+ (ComplexNumber &rightObj); // overload of an operator
    // code other operators here

    void print();

    string toString();

    // friend functions used as if local but not defined/implemented in class
    friend void operator>> (istream &input, ComplexNumber &num);
    friend ostream& operator<<(ostream& os, const ComplexNumber& myClass);
};

#endif //COMPLEXNUMBER_COMPLEXNUMBER_H
