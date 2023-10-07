#include <iostream>
using namespace std;

// Problem1 partA
int main1()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Problem1 partB
int main2()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int x = num; x >= i; x--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Problem1 partC
int main3()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << " ";
        }
        for (int x = num; x >= i; x--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Problem1 partD
int main4()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int x = num; x >= i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < i; x++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

// problem2 filled
int main5()
{
    int num;
    cout << "Enter height of equilateral triangle" << endl;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
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

    return 0;
}

// Problem2 empty
int main6()
{
    int num;
    cout << "Enter height of empty equilateral triangle" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int x = num; x > i + 1; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {
            if (i == num - 1)
            {
                cout << "*";
            }
            else
            {
                if (x == 0)
                {
                    cout << "* ";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        if (i == num - 1)
        {
            cout << "*";
        }
        cout << "*" << endl;
    }

    return 0;
}

// Problem3 filled
int main7()
{
    int num;
    cout << "Enter height of Diamond" << endl;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
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
    for (int i = num - 1; i > 0; i--)
    {
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
    return 0;
}

// problem3 empty
int main8()
{
    int num;
    cout << "Enter height of empty Diamond" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int x = num; x > i + 1; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 1; x++)
        {

            if (x == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    for (int i = num - 1; i > 0; i--)
    {
        for (int x = num; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x < (i * 2) - 3; x++)
        {

            if (x == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }

    return 0;
}

// Challenge 2
int main9()
{
    bool exit = false;
    while (!exit)
    {

        string param;
        int num;
        cout << "Enter the shape you want, \"pj\" for normal pyjamas \"upj\" for upside down pyjama and \"dpj\" for double pyjama " << endl;
        cout << "Enter \"exit\" if you wish to quit" << endl;
        cin >> param;
        if (param == "exit")
        {
            exit = true;
        }
        if (!exit)
        {
            cout << "Enter dimensions" << endl;
            cin >> num;
        }
        if (param == "pj")
        {
            for (int i = 1; i <= num; i++)
            {
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                for (int x = 0; x < (i * 2) - 2; x++)
                {
                    cout << " ";
                }
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        if (param == "upj")
        {
            for (int i = num; i >= 1; i--)
            {
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                for (int x = 0; x < (i * 2) - 2; x++)
                {
                    cout << " ";
                }
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        if (param == "dpj")
        {
            for (int i = 1; i <= num; i++)
            {
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                for (int x = 0; x < (i * 2) - 2; x++)
                {
                    cout << " ";
                }
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = num; i >= 1; i--)
            {
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                for (int x = 0; x < (i * 2) - 2; x++)
                {
                    cout << " ";
                }
                for (int x = num; x >= i; x--)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
    return 0;
}

// Challenge3 Part1
int main10()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    int number = 1;
    for (int i = 1; i <= num; i++)
    {
        number = 1;
        for (int x = 0; x < i; x++)
        {

            cout << number;
            number++;
        }
        cout << endl;
    }

    return 0;
}

// Challenge3 Part2
int main11()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    int number = 1;
    for (int i = num; i >= 1; i--)
    {
        number = 1;
        for (int x = 0; x < i; x++)
        {

            cout << number;
            number++;
        }
        cout << endl;
    }

    return 0;
}

// Challenge3 Part3
int main12()
{
    int num;
    cout << "Enter triangle height" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout << char(64 + i);
        }
        cout << endl;
    }

    return 0;
}
// Challenge3 Part4
int main13()
{
    int num;
    cout << "Enter height of equilateral triangle" << endl;
    cin >> num;
    int number = 1;
    for (int i = 0; i <= num; i++)
    {
        for (int x = num; x > i; x--)
        {
            cout << " ";
        }
        for (int x = 0; x <= i; x++)
        {

            cout << number;
            number++;
        }
        number--;
        for (int x = 0; x < i; x++)
        {

            number--;
            cout << number;
        }
        cout << endl;
    }
    return 0;
}

// Challenge3 Part5
int main14()
{
    int num;
    cout << "Enter dimensions of triangle" << endl;
    cin >> num;
    int number = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int x = 0; x < i; x++)
        {

            cout << number;
            number++;
        }
        cout << endl;
    }

    return 0;
}

// Challenge3 Part6
int main15()
{
    int num;
    cout << "Enter height of equilateral triangle" << endl;
    cin >> num;
    int number = 1;
    for (int i = 0; i <= num; i++)
    {
        for (int x = num; x > i; x--)
        {
            cout << "_";
        }
        for (int x = 0; x <= i; x++)
        {

            cout << number;
            number++;
        }
        number--;
        for (int x = 0; x < i; x++)
        {

            number--;
            cout << number;
        }
        cout << endl;
    }
    return 0;
}
