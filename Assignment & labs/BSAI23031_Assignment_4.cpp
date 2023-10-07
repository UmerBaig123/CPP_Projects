#include <iostream>
using namespace std;

// function for star
void star()
{
    int num;
    cout << "Enter dimension of star" << endl;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        for (int x = 0; x <= num; x++)
        {
            cout << " ";
        }

        for (int x = num; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= num; i++)
    {
        for (int x = i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = num + 1 - i; x > 0; x--)
        {
            cout << "*";
        }
        for (int x = 0; x <= (num * 2) - 2; x++)
        {
            cout << "*";
        }
        for (int x = num + 1 - i; x > 0; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = num - 1; i >= 1; i--)
    {
        for (int x = i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = num + 1 - i; x > 0; x--)
        {
            cout << "*";
        }
        for (int x = 0; x <= (num * 2) - 2; x++)
        {
            cout << "*";
        }
        for (int x = num + 1 - i; x > 0; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = num; i >= 0; i--)
    {
        for (int x = 0; x <= num; x++)
        {
            cout << " ";
        }

        for (int x = num; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// function for pyramid
void pyramid()
{
    int num;
    cout << "Enter dimension of pyramid" << endl;
    cin >> num;

    for (int i = 65; i <= num + 65; i++)
    {
        for (int x = num + 65; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 65; x <= i; x++)
        {
            cout << char(x);
        }
        for (int x = i; x > 65; x--)
        {
            cout << char(x);
        }
        cout << endl;
    }
}
// function for christmas tree
void cTree()
{
    int num;
    cout << "Enter dimension of christmas tree (stay within single digits for a not too big tree)" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int x = 0; x <= num * 2; x++)
        {
            cout << " ";
        }
        for (int x = num; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = num / 2; i <= num * 2; i++)
    {
        for (int x = 0; x <= num; x++)
        {
            cout << " ";
        }
        for (int x = num * 2; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 3; i <= num * 3; i++)
    {
        for (int x = num * 3; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int x = 0; x < (num * 3) - 3; x++)
        {
            cout << " ";
        }
        for (int x = 0; x < num / 2; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int x = 0; x <= num * 3 - num; x++)
    {
        cout << " ";
    }
    for (int x = 0; x < num; x++)
    {
        cout << "*";
    }
}
int main()
{
    int menu;
    cout << "Enter your choice, 1 for star, 2 for pyramid and 3 for cristmas tree" << endl;
    cin >> menu;
    if (menu == 1)
    {
        star();
    }
    else if (menu == 2)
    {
        pyramid();
    }
    else if (menu == 3)
    {
        cTree();
    }
    else
    {
        cout << "Invalid Entry" << endl;
        main();
    }
}