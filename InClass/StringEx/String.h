//
// Created by inet2005 on 10/10/17.
//

#ifndef STRINGEX_STRING_H
#define STRINGEX_STRING_H


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class String {
    //strMem is the member in property
    //strIn is the parameter
private:
    char *strMem;
public:
    String(); // default constructor

    String(char *strIn); // constructor with one argument

    String(const String& strIn); // copy constructor

    ~String(); // custom destructor to avoid mem leaks

    // overload of operators
    String operator= (String &strIn);

    String operator+= (String &strIn);

    friend ostream& operator<< (ostream& output, String& strIn);
};


#endif //STRINGEX_STRING_H
