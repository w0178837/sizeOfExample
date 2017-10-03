// myOwnMath header file
// This is the interface for the myOwnMath class
// square() and add() both return ints

#ifndef IRRATIONALNUMBERS_MYOWNMATH_H
#define IRRATIONALNUMBERS_MYOWNMATH_H

#include <iostream>

using namespace std;

class myOwnMath
{
public:
    myOwnMath(void); // default constructor
    virtual ~myOwnMath(void);//destructor

    int square(int); // square a number
    int add(int); // add a constant to a number
};


#endif //IRRATIONALNUMBERS_MYOWNMATH_H
