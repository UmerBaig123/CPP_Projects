#include <iostream>
using namespace std;

// question1
void q1(int num)
{
    bool prime = true;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            prime = false;
        }
    }
    if (prime)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime" << endl;
    }
}

// Question2
void q2(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << endl
         << num2 << endl;
}

// Question3 Triangle check
int q3()
{
    int a, b, c;
    cout << "Enter angles of triangle" << endl;
    cin >> a >> b >> c;
    if (a + b + c == 120)
    {
        cout << "triangle" << endl;
    }
    else
    {
        cout << "not a triangle" << endl;
    }
    return 0;
}

// Question4 weekdays
int q4()
{
    int i;
    cout << "Enter number for day" << endl;
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    }
    return 0;
}

// Question4 leap year check
int q5()
{
    int year;
    cout << "Enter Year" << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "not a leap year";
    }
    return 0;
}

int main()
{
    cout << "Enter the number you have to check" << endl;
    int num;
    cin >> num;
    q1(num);
    int num1, num2;
    cout << "Enter the numbers you wish to swap" << endl;
    cin >> num1 >> num2;
    q2(num1, num2);
    q3();
    q4();
    q5();
    return 0;
}