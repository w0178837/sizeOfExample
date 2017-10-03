// myOwnMath cpp file
// description of class goes here

#include <iostream>
#include  "myOwnMath.h" // programmer defined header

using namespace std;

// DO NOT redefine class here - already done in header
// but DO reference the methods in the header using class:: syntax

// actual implementations
myOwnMath::myOwnMath() {} // constructor
myOwnMath::~myOwnMath() {} // destructor
int myOwnMath::square(int num) {
    return num*num;
}
int myOwnMath::add(int num) {
    return num + num;
}

