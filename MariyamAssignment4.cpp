#include <iostream>
using namespace std;
void star()
{
    int n;
    cout << "Enter dimension of star" << endl;
    cin >> n;
    for (int i = 1; i <= n / 1.5; i++)
    {
        for (int x = 0; x < n; x++)
        {
            cout << " ";
        }
        for (int x = n - i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        for (int x = 1; x < i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        for (int x = 1; x < i; x++)
        {
            cout << " ";
        }
        for (int x = n - i; x > 0; x--)
        {
            cout << "*";
        }
        for (int x = 0; x < n * 2; x++)
        {
            cout << "*";
        }

        for (int x = n - i; x > 0; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n / 2; i >= 1; i--)
    {
        for (int x = 1; x < i; x++)
        {
            cout << " ";
        }
        for (int x = n - i; x > 0; x--)
        {
            cout << "*";
        }
        for (int x = 0; x < n * 2; x++)
        {
            cout << "*";
        }

        for (int x = n - i; x > 0; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n / 1.5; i >= 1; i--)
    {
        for (int x = 0; x < n; x++)
        {
            cout << " ";
        }
        for (int x = n - i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        for (int x = 1; x < i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pyramid()
{
    int n;
    cout << "Enter the dimension of pyramid" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int x = n - i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << char(65 + x);
        }
        for (int x = i; x > 1; x--)
        {
            cout << char(65 + x);
        }
        cout << endl;
    }
}
void christmasTree()
{
    int n;
    cout << "Enter the dimension of Christmas Tree (above 9 will print very big trees)" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 0; x < n * 2; x++)
        {
            cout << " ";
        }
        for (int x = n - i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        for (int x = i; x > 1; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n / 2; i <= n * 2; i++)
    {
        for (int x = 0; x < n; x++)
        {
            cout << " ";
        }
        for (int x = n * 2 - i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        for (int x = i; x > 1; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n / 1.5; i <= n * 3; i++)
    {

        for (int x = n * 3 - i; x > 0; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        for (int x = i; x > 1; x--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i <= n; i++)
    {
        if (i == n)
        {
            for (int x = 0; x < (n * 3) - (n); x++)
            {
                cout << " ";
            }
            for (int x = 0; x < n * 2; x++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int x = 0; x < (n * 3 - 1) - (n / 4); x++)
            {
                cout << " ";
            }
            for (int x = 0; x < n / 2; x++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main()
{
    int figure;
    cout << "Enter 1 for star, 2 for pyramid and 3 for christmas tree or anything else (other than 1,2,3) to exit" << endl;
    cin >> figure;
    switch (figure)
    {
    case 1:
        star();
        main();
        break;
    case 2:
        pyramid();
        main();
        break;
    case 3:
        christmasTree();
        main();
        break;

    default:
        break;
    }
    return 0;
}