#include <iostream>
using namespace std;

void digit2Word(int num)
{
    switch (num)
    {
    case 0:
        cout << "zero ";
        break;
    case 1:
        cout << "one ";
        break;
    case 2:
        cout << "two ";
        break;
    case 3:
        cout << "three ";
        break;
    case 4:
        cout << "four ";
        break;
    case 5:
        cout << "five ";
        break;
    case 6:
        cout << "six ";
        break;
    case 7:
        cout << "seven ";
        break;
    case 8:
        cout << "eight ";
        break;
    case 9:
        cout << "nine ";
        break;
    }
}
void newfunc(int num)
{
    int numb = num;
    while (numb != 0)
    {
        digit2Word(numb % 10);
        numb /= 10;
    }
}
int main()
{
    int num;
    cin >> num;
    newfunc(num);
    return 0;
}