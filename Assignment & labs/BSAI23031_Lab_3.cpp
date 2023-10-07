#include <iostream>
using namespace std;

//                      Search (ctrl+F) Problem1 or Problem7 part1
// Problem1 Part1
int main1()
{
    for (int i = 100; i <= 200; i++)
    {
        cout << i << endl;
    }

    return 0;
}
// part2
int main2()
{
    for (int i = 100; i <= 200; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}
// part3
int main3()
{
    for (int i = 101; i <= 200; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}
// part4
int main4()
{
    for (int i = 100; i <= 200; i += 5)
    {
        cout << i << endl;
    }

    return 0;
}
// Problem2 part1
int main5()
{
    float cels;
    cout << "Enter Temperature in Celsius" << endl;
    cin >> cels;
    cout << "In Farenheit: " << (9.0 / 5.0 * cels) + 32 << endl;
    cout << "In Kelvin: " << cels + 273.15 << endl;
    return 0;
}
// part2
int main6()
{
    float far;
    cout << "Enter Temperature in farenheit" << endl;
    cin >> far;
    cout << "In Celsius: " << (far - 32) * 5.0 / 9.0 << endl;
    cout << "In Kelvin: " << (far - 32) * 5.0 / 9.0 + 273.15 << endl;
    return 0;
}
// part3
int main7()
{
    float kel;
    cout << "Enter Temperature in Kelvin" << endl;
    cin >> kel;
    cout << "In Celsius: " << kel - 273.15 << endl;
    cout << "In Farenheit: " << (kel - 273.15) * 9.0 / 5.0 + 32 << endl;
    return 0;
}
// Problem3
int main8()
{
    int n, k;
    int prod = 1;
    cout << "enter the value of k" << endl;
    cin >> k;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < k; i++)
    {
        prod *= n;
    }
    cout << prod;
    return 0;
}
// Problem4
int main9()
{
    int A, B, temp;
    cout << "Enter two values" << endl;
    cin >> A >> B;
    temp = A;
    A = B;
    B = temp;
    cout << "Value of first var is: " << A << endl
         << "Value of second var is: " << B;
    return 0;
}

// Problem4 BONUS using only 2 vars
int main10()
{
    int A, B;
    cout << "Enter two values" << endl;
    cin >> A >> B;
    A = A + B;
    B = A - B;
    A -= B;
    cout << A << endl
         << B;
    return 0;
}
// Problem5
int main11()
{
    int k, num;
    int sum = 0;
    cout << "Enter number of inputs" << endl;
    cin >> k;
    cout << "Enter " << k << " value" << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << "The average is: " << sum / k << endl;
    return 0;
}
// Problem6
int main12()
{
    int k, num;
    int sum = 0;
    cout << "Enter number of inputs" << endl;
    cin >> k;
    cout << "Enter " << k << " value" << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}
// Problem7 Part1
int main13()
{
    int k;
    cout << "Enter the number limit" << endl;
    cin >> k;
    cout << endl;
    for (int i = 2; i < (k * 2) + 2; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}
// Problem7 part2
int main14()
{
    int k;
    cout << "Enter the number limit" << endl;
    cin >> k;
    cout << endl;
    for (int i = 1; i < (k * 2) + 1; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}
// Problem8
int main15()
{
    int k;
    cout << "Enter the number limit" << endl;
    cin >> k;
    cout << endl;
    for (int i = 5; i < k; i += 5)
    {
        cout << i << endl;
    }

    return 0;
}
// Problem9
int main16()
{
    int k;
    cout << "Enter the number limit" << endl;
    cin >> k;
    cout << endl;
    for (int i = k - 1; i > 1; i--)
    {
        cout << i << endl;
    }

    return 0;
}
// Problem10
int main17()
{
    int num;
    cout << "Enter the number for table" << endl;
    cin >> num;
    cout << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}
// Problem11 part1
int main18()
{
    int num;
    cout << "Enter the number for table" << endl;
    cin >> num;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << num << " X " << i << " = " << num * i << endl;
        }
    }

    return 0;
}
// Problem11 part2
int main19()
{
    int num;
    cout << "Enter the number for table" << endl;
    cin >> num;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            cout << num << " X " << i << " = " << num * i << endl;
        }
    }

    return 0;
}
// Problem12
int main20()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << endl;
    for (int i = 3; i < num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}