#include <iostream>

using namespace std;

int main() {
    int userInput;
    DayOfYear today;
    DayOfYear birthday;

    cout << "Birthday Program" << endl;
    cout << "Enter this month as a # 1-12" << endl;
    cin >> userInput;
    today.setMonth(userInput);
    cout << "Enter birthday month as a # 1-12" << endl;
    cin >> userInput;
    birthday.setMonth(userInput);

    cout << "Enter this day as a # 1-31" << endl;
    cin >> userInput;
    today.setDay(userInput);
    cout << "Enter birthday day as a # 1-31" << endl;
    cin >> userInput;
    birthday.setDay(userInput);

    if (today.getMonth() == birthday.getMonth() && today.getDay() == birthday.getDay())
    {
        cout << "Happy Birthday!" << endl;
    } else{
        cout << "Sorry, today is not your birthday..." << endl;
    }
     cin >> userInput;

    return 0;
}