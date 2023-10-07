#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    int factorial = 1;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << factorial << endl;
    if (factorial % (num * 5) == 0)
    {
        cout << "Factorial is divisible by sum of factors" << endl
             << num * 5 << endl
             << factorial / (num * 5);
    }

    return 0;
}