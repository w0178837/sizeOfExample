#include <iostream>

using namespace std;
int main() {

    int array[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    bool arrayB[][3] = {{true,true,false},{true,false,true},{false,false,false}};

    cout << sizeof(array) << endl;
    cout << sizeof(array[0]) << endl;

    cout << sizeof(arrayB) << endl;
    cout << sizeof(arrayB[0])<< endl;

    bool (*pBoolean)[3];

    pBoolean = arrayB;
    bool test = true;

    int i=0;
    for (int row = 0; row <3; row++)
    {
        cout<<"row " << row << *(pBoolean + row) << endl ;
        for (int col = 0; col < 3;col++)
        {
            cout << "*(pBoolean["<< row << "] + " << col << ") " << *(pBoolean[row] + col)<< endl;
            i++;
        }
    }


    return 0;
}