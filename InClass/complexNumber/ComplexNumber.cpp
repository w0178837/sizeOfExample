//
// Created by inet2005 on 10/3/17.
//

#include <iostream>
#include <sstream>
#include "ComplexNumber.h"


    ComplexNumber::ComplexNumber()
            :real(),imaginary(){}
    ComplexNumber::ComplexNumber(double real, double imaginary) //constructor with arguments
            :real(real),imaginary(imaginary){}
    ComplexNumber::ComplexNumber(string s) // constructor with arg to parse string like "a+bi"
    {
        // parse routine goes here
        this->real = 3; //hard coded stub for testing
        this->imaginary = 8;
    }

    ComplexNumber ComplexNumber::operator+(ComplexNumber &rightObj) {
        return ComplexNumber(this->real + rightObj.real, this->imaginary + rightObj.imaginary);
    }
    // code other operators here

    void ComplexNumber::print()
    {
        cout << this->real << "+" << this->imaginary <<"i"; // a+bi format
    }

    string ComplexNumber::toString()
    {
        stringstream strStream;
        string x,y;
        // the following will convert doubles to strings
        strStream << this->real; // place the double into the stream
        strStream >> x; // convert to string
        strStream.clear(); // clear the stream
        strStream << this->imaginary; // repeat for next variable
        strStream >> y;

        return (x+"+"+y+"i"); // return formatted string
    }



    // IMPLEMENTATION of friend functions

    void operator>>(istream &input, ComplexNumber &num) {
        string str;
        getline(input, str);// assign input to string var
        num = ComplexNumber(str);// call to CN string constructor for a+bi
    }

    ostream& operator<<(ostream &output, const ComplexNumber &num)
    {
        output << num.real << "+" << num.imaginary << "i";
        return output; // returns an ostream obj
    }



