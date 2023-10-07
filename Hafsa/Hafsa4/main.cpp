#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int funcNo;
    cout << "LAB 5" << endl;
    cout << "Enter 1 for q1, 2 for q2, 3 for q3, 4 for q4 and 5 for q5" << endl;
    cin >> funcNo;
    switch (funcNo)
    {
    case 1:
        q1();
        break;
    case 2:
        q2();
        break;
    case 3:
        q3();
        break;
    case 4:
        q4();
        break;
    case 5:
        q5();
        break;

    default:
        cout << "Enter a valid option" << endl;
        break;
    }
    return 0;
}