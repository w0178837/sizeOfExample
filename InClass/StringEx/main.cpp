#include <iostream>
#include <cstdio>
#include "String.h"

using namespace std;

int main() {
    cout << "Begin test of String class" << endl;

    cout << "Test one:" << endl;

    String fullName; // default constructor

    String firstName("Bob"); // one argument constructor
    String lastName("Loblaw"); // one argument constructor
    fullName += firstName; // test of custom += operator overload
    fullName += lastName;
    cout << "Full name is: " << fullName << endl;

    cout << "Test two:" << endl;
    String name("Some Name"); // one arg constructor
    String someOtherName("Some other name");
    cout << "Name: " << name << endl;
    name = someOtherName; // overloaded assignment
    cout << "Name: " << name << endl;

    // the big 3 : The Copy Constructor, The Assignment Operator, The Custom Destructor

    return 0;
}