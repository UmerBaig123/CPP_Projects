#include <iostream>
using namespace std;

//                      Search a problem (ctrl+f) problem0 or problem7 part2
// Problem0
void sequences()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    bool toggle = true;
    for (int i = 1; i <= n; i += 2)
    {
        cout << i;
        if (i + 2 <= n)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    for (int i = 1; i <= n; i *= 5)
    {
        cout << i;
        if (i * 5 <= n)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    for (int i = 1; i <= n; toggle = !toggle)
    {
        cout << i;

        if (toggle)
        {
            i += 3;
        }
        else
        {
            i *= 2;
        }
        if (i <= n)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    for (int i = n; i > 0; i--)
    {
        cout << i;
        if (i != 1)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    for (int i = n; i > 0; i == 1 ? i -= 1 : i -= i / 2)
    {
        cout << i;

        if (i - (i / 2) > 0)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    int i2 = 1;
    for (int i = 1; i <= n; i += 5)
    {
        cout << i2 << ", " << i;
        i2 += 2;
        if (i + 5 <= n)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    i2 = 1;
    for (int i = n; i > 0; i--)
    {
        cout << i2 << ", " << i;
        i2++;
        if (i - 1 > 0)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    i2 = 0;
    for (int i = 0; i <= n; i += 8)
    {
        cout << i2 << ", " << i;
        i2 += 4;
        if (i + 8 <= n)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    i2 = 10;
    for (int i = 20; i <= n && i2 <= n; i += 2)
    {
        cout << i2 << ", " << i;
        i2 += 5;
        if (i + 2 <= n && i2 <= n)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;
    i2 = 1;
    for (int i = 1; i2 <= n; i++)
    {
        cout << i2 << ", " << i * i;
        i2 *= i + 1;
        if (i2 <= n)
        {
            cout << ", ";
        }
    }
}
// Problem1
void oddEven()
{
    bool loop = true;
    int odd = 0, even = 0;
    while (loop)
    {
        int num;
        cout << "Enter Number" << endl;
        cin >> num;
        if (num == -1)
        {
            loop = false;
        }
        else
        {
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    cout << "Frequency of even numbers is: " << even << endl;
    cout << "Frequency of odd numbers is: " << odd << endl;
}
// Problem2 part1
void maxMin()
{
    int max, min;
    bool loop = true, first = true;
    while (loop)
    {
        int num;
        cout << "Enter number" << endl;
        cin >> num;
        if (num == -1)
        {
            loop = false;
        }
        else
        {
            if (!first)
            {
                if (num > max)
                {
                    max = num;
                }
                if (num < min)
                {
                    min = num;
                }
            }
            else
            {
                max = num;
                min = num;
                first = false;
            }
        }
    }
    cout << "max is : " << max << endl;
    cout << "min is : " << min << endl;
}
// Problem2 part2
void secondMax()
{
    int max, secondMax;
    bool loop = true, first = true;
    while (loop)
    {
        int num;
        cout << "Enter number" << endl;
        cin >> num;
        if (num == -1)
        {
            loop = false;
        }
        else
        {
            if (!first)
            {
                if (num > max)
                {
                    secondMax = max;
                    max = num;
                }
                else
                {
                    if (num > secondMax)
                    {
                        secondMax = num;
                    }
                }
            }
            else
            {
                max = num;
                secondMax = num;
                first = false;
            }
        }
    }
    cout << "max is : " << max << endl;
    cout << "second max is : " << secondMax << endl;
}
// Problem3 part1
bool isPrime(int n)
{
    bool prime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % 2 == 0)
        {
            prime = false;
        }
    }
    return prime;
}
// Problem3 part2
void multiplePrime()
{
    int N;
    bool prime = true;
    cout << "Enter value of N" << endl;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cout << "Enter Number" << endl;
        cin >> num;
        if (isPrime(num))
        {
            cout << "The number is prime" << endl;
        }
        else
        {
            cout << "The number is not prime" << endl;
        }
    }
}
// Problem3 part3
void PrintPrimeFactors()
{
    int N;
    bool prime = true;
    cout << "Enter value of N" << endl;
    cin >> N;
    cout << "Prime Factors are : ";
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0 && isPrime(i))
        {
            cout << i << " ";
        }
    }
}
// Problem3 part4
int largestPrime()
{
    int N, largest;
    bool prime = true;
    cout << "Enter value of N" << endl;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0 && isPrime(i))
        {
            largest = i;
        }
    }
    return largest;
}
// Problem3 part5
void rangedPrime()
{
    int R1, R2, largest;
    bool prime = true;
    cout << "Enter value of R1 and R2 respectively" << endl;
    cin >> R1 >> R2;
    cout << "Prime number in this range are : ";
    for (int i = R1; i <= R2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
// problem4 part1
int NthFib(int n)
{
    int num1 = 0, num2 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        num2 += num1;
        num1 = num2 - num1;
    }
    if (n != 0)
    {
        return num2;
    }
    else
    {
        return 0;
    }

    return 0;
}
// problem4 part2
void multipleFib()
{
    int k;
    cout << "Enter value of K" << endl;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int num;
        cout << "Enter the value of n" << endl;
        cin >> num;
        cout << "F" << num << " = " << NthFib(num) << endl;
    }
}
// problem4 part3
void limitedFib(int T)
{
    bool loop = true;
    int i = 0;
    cout << "The sequence up to <" << T << " is : ";
    while (loop)
    {
        if (NthFib(i) > T)
        {
            loop = false;
        }
        else
        {
            cout << NthFib(i);
            if (NthFib(i + 1) <= T)
            {
                cout << ", ";
            }
        }
        i++;
    }
    cout << endl;
}
// problem4 part4
void RangedFib(int start, int end)
{
    bool loop = true;
    int i = 0;
    while (loop)
    {
        if (NthFib(i) > end)
        {
            loop = false;
        }
        else
        {
            if (NthFib(i) > start)
            {
                cout << NthFib(i);
                if (NthFib(i + 1) <= end)
                {
                    cout << ", ";
                }
            }
        }
        i++;
    }
    cout << endl;
}
// problem4 part5
void fibSum()
{
    int sum = 0;
    for (int i = 0; NthFib(i) <= 4000000; i++)
    {
        if (NthFib(i) % 2 == 0)
        {
            sum += NthFib(i);
        }
    }
    cout << "The sum is " << sum << endl;
}
// Problem5
void naturalAddition()
{
    int sum = 0;
    for (int i = 500; i <= 3000; i++)
    {
        if ((i % 5 == 0 || i % 3 == 0) && i % 15 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}
// problem6 part1
int NthTriangle(int n)
{
    int triangle = 0;
    for (int i = 1; i <= n; i++)
    {
        triangle += i;
    }
    return triangle;
}
// problem6 part2
void limitedTriangle()
{
    int m;
    cout << "Enter the value of m" << endl;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << NthTriangle(i);
        if (i < m)
        {
            cout << ", ";
        }
    }
    cout << endl;
}
// problem7 part1
int GDC(int num1, int num2)
{
    int gdc;
    int smaller = num1 <= num2 ? num1 : num2;
    for (int i = 1; i <= smaller; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gdc = i;
        }
    }

    return gdc;
}
// problem7 part2
void nGDCs()
{
    int n;
    cout << "Enter value of N" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num1, num2;
        cout << "Enter two values" << endl;
        cin >> num1 >> num2;
        cout << GDC(num1, num2) << endl;
    }
}
int main()
{
    sequences();
    return 0;
}