//  Implementation of Class DayOfYear
// Created by inet2005 on 10/5/17.
//

#include "DayOfYear.h"
#include <iostream>

using namespace std;


void DayOfYear::setMonth(int month) {
    this->month = month;
}

int DayOfYear::getMonth() {
    return this->month;
}

void DayOfYear::setDay(int day) {
    this->day = day;
}

int DayOfYear::getDay() {
    return this->day;
}

void DayOfYear::output() {
    switch(this->month)
    {
        case 1:
            cout << "Jan";
            break;
        case 2:
            cout << "Feb";
            break;
        case 3:
            cout << "Mar";
            break;
        case 4:
            cout << "Apr";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "Jun";
            break;
        case 7:
            cout << "Jul";
            break;
        case 8:
            cout << "Aug";
            break;
        case 9:
            cout << "Sep";
            break;
        case 10:
            cout << "Oct";
            break;
        case 11:
            cout << "Nov";
            break;
        case 12:
            cout << "Dec";
            break;
        default:
            cout << "Ain't no month #" << this->month;
            break;

    }// end of switch
    if (this->month <=12 && this->month > 0)
        cout << " " << this->day;
}
