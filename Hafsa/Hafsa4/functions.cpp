#include <iostream>
#include "functions.h"
using namespace std;

void q1()
{
    int n, sum = 0;
    cout << "Enter value of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
void q2()
{
    int lower, upper;
    cout << "Enter lower and upper limit of range respectively" << endl;
    cin >> lower >> upper;
    for (int x = lower; x <= upper; x++)
    {
        bool prime = true;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}

void q3()
{
    for (int i = 2; i < 6; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            cout << x;
        }
        cout << endl;
    }
}
void q4()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void q5()
{
    int num, sum = 0;
    cout << "Enter Integer" << endl;
    cin >> num;
    while (num != 0)
    {
        int temp = num;
        num /= 10;
        sum += (temp - (num * 10));
    }
    cout << sum << endl;
}