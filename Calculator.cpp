// Created by Muhammad Umer Baig

#include <iostream>
using namespace std;
int main()
{
    bool i = true;

    while (i)
    {
        string isLoop;
        cout << "enter in form:\nx\n*\ny" << endl;
        float Num1;
        char Operation;
        float Num2;
        cin >> Num1;
        cin >> Operation;
        cin >> Num2;
        switch (Operation)
        {
        case '+':
            cout << Num1 + Num2 << endl;
            break;
        case '-':
            cout << Num1 - Num2 << endl;
            break;
        case '*':
            cout << Num1 * Num2 << endl;
            break;
        case '/':
            cout << Num1 / Num2 << endl;
            break;
        default:
            cout << "syntax error" << endl;
            break;
        }
        cout << "Do you wish to continue (yes/no)" << endl;
        cin >> isLoop;
        if (isLoop != "yes")
        {
            i = false;
        }
    }
    return 0;
}