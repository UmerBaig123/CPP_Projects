#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i <= num * 2; i += 2)
    {
        for (int x = num * 2; x > i; x -= 2)
        {
            cout << " ";
        }
        for (int x = 0; x < i + 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}