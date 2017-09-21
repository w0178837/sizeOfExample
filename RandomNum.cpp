//
// Created by inet2005 on 9/12/17.
//

#include <iostream>
#include <string>
#include <sstream>
#include "conio.h"
#include <ctime>


using namespace std;

int main()
{
    srand(time(0));// send srand its seed
    for (int i = 0; i < 100; i++)
    {
        cout << i + 1 << " " << 1 + rand() % 10 << endl;
    }

}