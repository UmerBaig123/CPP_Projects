#include <iostream>
using namespace std;

// Grading system
int grades()
{
    int marks;
    cout << "Enter student marks" << endl;
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "D" << endl;
    }
    else if (marks >= 50)
    {
        cout << "E" << endl;
    }

    return 0;
}

// 2 numbers calculator
int calculator()
{
    float num1, num2;
    char op;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter operation" << endl;
    cin >> op;
    cout << "Enter second number" << endl;
    cin >> num2;
    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid operation" << endl;
        break;
    }
    return 0;
}

int conditionalOperators()
{
    bool T = true;
    bool F = false;
    if (T && F)
    {
        cout << "T and F is true" << endl;
    }
    else
    {
        cout << "T and F is false" << endl;
    }
    if (T || F)
    {
        cout << "T or F is true" << endl;
    }
    else
    {
        cout << "T or F is false" << endl;
    }
    if (T && !F)
    {
        cout << "T and !F is true" << endl;
    }
    else
    {
        cout << "T and !F is false" << endl;
    }
    if (!T || F)
    {
        cout << "!T or F is true" << endl;
    }
    else
    {
        cout << "!T or F is false" << endl;
    }
    return 0;
}

int forloop()
{
    int num;
    cout << "Enter limit" << endl;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        cout << i << endl;
    }
    return 0;
}
int whileLoop()
{
    int num, i = 0;
    cout << "Enter limit" << endl;
    cin >> num;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}

int whileinput()
{
    string in;
    bool loop = true;
    while (loop)
    {
        cin >> in;
        if (in == "exit")
        {
            loop = false;
        }
        else
        {
            cout << in << endl;
        }
    }
    return 0;
}