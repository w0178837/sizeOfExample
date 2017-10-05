// Header file for DayOfYear Class
// Created by inet2005 on 10/5/17.
// List methods here:

#ifndef BIRTHDAYCALC_DAYOFYEAR_H
#define BIRTHDAYCALC_DAYOFYEAR_H

#include <iostream>

using namespace std;

class DayOfYear {

private:
    int month;
    int day;

public:
    DayOfYear(void) = default;
    ~DayOfYear(void) = default;

    void setMonth(int month);
    int getMonth();

    void setDay(int day);
    int getDay();

    void output();


}; // EOC


#endif //BIRTHDAYCALC_DAYOFYEAR_H
