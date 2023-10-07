#include <iostream>
using namespace std;

void cont1()
{
    int roll;
    int rollNo[] = {1, 2, 3, 4};
    string names[] = {"Hafsa", "Eisha", "Umer", "BintewadoodBhatti"};
    cout << "Enter roll number 1-4" << endl;
    cin >> roll;
    for (int i = 0; i < sizeof(rollNo) / sizeof(int); i++)
    {
        if (roll == rollNo[i])
        {
            cout << names[i] << endl;
        }
    }
}
void cont2()
{
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;
    cout << num1 << endl
         << num2 << endl;
}
void cont3()
{
    cout << "Size of int is " << sizeof(int);
    cout << "Size of float is " << sizeof(float);
    cout << "Size of char is " << sizeof(char);
}
void cont4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << "  ";
        }
        switch (i)
        {
        case 1:
            cout << "H";
            break;
        case 2:
            cout << "E";
            break;
        case 3:
            cout << "L";
            break;
        case 4:
            cout << "L";
            break;
        case 5:
            cout << "O";
            break;
        }
        cout << endl;
    }
}
int main()
{
    cont4();
    return 0;
}