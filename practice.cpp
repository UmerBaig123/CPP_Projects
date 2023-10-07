#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        string input;
        int h;
        cout << "For simple pajama enter pj, for inverted pajama enter ipj, for double pajama enter dpj" << endl;
        cout << "Input:";
        cin >> input;
        if (input == "pj")
        {
            cout << "Enter Height of pajama:";
            cin >> h;
            for (int i = 1; i <= h; i++)
            {
                for (int a = h; a >= i; a--)
                {
                    cout << "*";
                }
                if (i > 1)
                {
                    for (int t = 1; t < i; t++)
                    {
                        cout << "  ";
                    }
                }
                for (int a = h; a >= i; a--)
                {
                    cout << "*";
                }
                cout << endl;

                cout << endl;
            }
        }

        else if (input == "ipj")
        {
            cout << "Enter Height of pajama:";
            cin >> h;
            for (int i = 1; i <= h; i++)
            {
                for (int a = 1; a <= i; a++)
                {
                    cout << "*";
                }
                for (int t = h; t > i; t--)
                {
                    cout << "  ";
                }
                for (int b = 1; b <= i; b++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (input == "dpj")
        {
            cout << "Enter Height of pajama:";
            cin >> h;
            for (int i = 1; i <= h; i++)
            {
                for (int a = h; a >= i; a--)
                {
                    cout << "*";
                }
                if (i > 1)
                {
                    for (int t = 1; t < i; t++)
                    {
                        cout << "  ";
                    }
                }
                for (int a = h; a >= i; a--)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (int f = 1; f <= h; f++)
            {
                for (int c = 1; c <= f; c++)
                {
                    cout << "*";
                }
                for (int y = h; y > f; y--)
                {
                    cout << "  ";
                }
                for (int b = 1; b <= f; b++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (input == "exit")
        {
            break;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}