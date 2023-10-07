#include <iostream>
#include <ctime>
using namespace std;

// GCD partA
int main1()
{
    int num1, num2, gdc;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    int smaller = num1 <= num2 ? num1 : num2;
    for (int i = 1; i <= smaller; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gdc = i;
        }
    }
    cout << gdc << endl;

    return 0;
}

// GCD partB
int main2()
{
    int num, loop, gdc, temp;
    cout << "Enter the ammount of total numbers" << endl;
    cin >> loop;
    cout << "Enter all the numbers" << endl;
    cin >> num;
    gdc = num;
    for (int x = 0; x < loop - 1; x++)
    {
        cin >> num;
        int smaller = num <= gdc ? num : gdc;
        for (int i = 1; i <= smaller; i++)
        {
            if (num % i == 0 && gdc % i == 0)
            {
                temp = i;
            }
        }
        gdc = temp;
    }

    cout << gdc << endl;

    return 0;
}

// GCD partC i
int main3()
{
    int num1, num2, lcm;
    bool loop = true;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    lcm = num1 < num2 ? num1 : num2;
    while (loop)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            cout << lcm << endl;
            loop = false;
        }
        lcm++;
    }

    return 0;
}

// GCD partC ii
int main4()
{
    int num1, num2, gdc;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    int smaller = num1 <= num2 ? num1 : num2;
    for (int i = 1; i <= smaller; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gdc = i;
        }
    }
    cout << num1 * num2 / gdc << endl;

    return 0;
}

// Fibonacci partA
int main5()
{
    int num1 = 0, num2 = 1, n;
    cout << "Enter the value for n" << endl;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        num2 += num1;
        num1 = num2 - num1;
    }
    if (n != 0)
    {
        cout << num2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

// Fibonacci partB
int main6()
{
    int n, loop;
    cout << "How many Fibonacci Numbers do you want to ask:" << endl;
    cin >> loop;
    for (int x = 0; x < loop; x++)
    {
        int num1 = 0, num2 = 1;
        cout << "Enter the number" << endl;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            num2 += num1;
            num1 = num2 - num1;
        }
        if (n != 0)
        {
            cout << num2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

// Fibonacci partC
int main7()
{
    int num1 = 0, num2 = 1, n;
    cout << "Enter the value for parameter T" << endl;
    cin >> n;
    cout << num1 << ", " << num2;
    for (int i = 0; i < n - 2; i++)
    {
        num2 += num1;
        num1 = num2 - num1;
        cout << ", " << num2;
    }

    return 0;
}

// Fibonacci partD
int main8()
{
    int num1 = 0, num2 = 1, sum;
    while (num2 <= 4000000)
    {
        num2 += num1;
        num1 = num2 - num1;
        if (num2 % 2 == 0)
        {
            sum += num2;
        }
    }
    cout << sum << endl;
    return 0;
}

// Digital clock
//               NOTE: RUN in the windows terminal, the system(cls) creates problem with the vsCode terminal
//                               or just remove system(cls) from line 205
int main9()
{
    int milli_seconds = 1000;
    time_t start;
    start = time(0);
    int hour, minutes, seconds;
    time_t now = time(0);
    int timeToday = now % 86400;
    hour = (timeToday / 3600) + 5;
    if (hour >= 12)
    {
        hour -= 12;
    }
    timeToday = timeToday % 3600,
    minutes = timeToday / 60;
    seconds = timeToday % 60,
    cout << hour << ":" << minutes << ":" << seconds;

    while (1)
    {

        if (time(0) - start == 1)
        {
            system("cls");
            cout << hour << ":" << minutes << ":" << seconds << endl;
            start = start + 1;
            if (seconds != 59)
            {
                seconds++;
            }
            else
            {
                seconds = 0;
                if (minutes != 59)
                {
                    minutes++;
                }
                else
                {
                    minutes = 0;
                    if (hour != 12)
                    {
                        hour++;
                    }
                    else
                    {
                        hour = 0;
                    }
                }
            }
        }
    }

    return 0;
}
int main()
{
    main9();
    return 0;
}