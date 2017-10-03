#include <iostream>
#include <sstream>
#include "ComplexNumber.h"

using namespace std;


int main() {

    ComplexNumber complexNumber1(3,4);
    ComplexNumber complexNumber2(1,2);
    ComplexNumber complexNumber3 = complexNumber1 + complexNumber2;

    cout << complexNumber1.toString()<<endl;
    cout << complexNumber2.toString()<<endl;
    cout << complexNumber3 << endl;

    ComplexNumber complexNumber4;
    cin >> complexNumber4;

    cout << complexNumber4;

    return 0;
}