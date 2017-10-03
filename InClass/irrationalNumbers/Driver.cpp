// this is our Driver for myOwnMath demo
#include <iostream>
#include "myOwnMath.h"

using namespace std;



int main() {
    int ans1 = 0;
    int ans2 = 0;
    int input = 0;

    myOwnMath myOwnMathobj;

    cout << "Enter an integer (1-9)" << endl;
    cin >> input; // unvalidated (because we're lazy)
    ans1 = myOwnMathobj.square(input);
    ans2 = myOwnMathobj.add(input);

    cout << "The integer squared is: " << ans1 << endl;
    cout << "The integer added to itself (x2) is: " << ans2 << endl;

    return 0;
}
