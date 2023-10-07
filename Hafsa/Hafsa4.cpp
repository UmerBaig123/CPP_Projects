
#include <iostream>
using namespace std;
int q1(int n, int times)
{
    if (times < 1)
    {
        return 0;
    }
    else
    {
        return n + q1(n, times - 1);
    }
}
int q2(int n)
{
    int num = n % 10;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return num + q2(n / 10);
    }
}
bool q3(int num, int numDiv)
{
    if (num % numDiv == 0 && numDiv < num && numDiv > 1)
    {
        return false;
    }
    else if (numDiv == 1)
    {
        return true;
    }
    else
    {
        return q3(num, numDiv - 1);
    }
}
int sumofeven(int lowerLim, int upperLim, int sum)
{
    if (lowerLim == upperLim)
    {
        return sum + lowerLim;
    }
    else
    {
        if (lowerLim % 2 == 0)
        {
            return sumofeven(lowerLim + 1, upperLim, sum + lowerLim);
        }
        else
        {
            return sumofeven(lowerLim + 1, upperLim, sum);
        }
    }
}
int sumofodd(int lowerLim, int upperLim, int sum)
{
    if (lowerLim == upperLim)
    {
        return sum + lowerLim;
    }
    else
    {
        if (lowerLim % 2 != 0)
        {
            return sumofodd(lowerLim + 1, upperLim, sum + lowerLim);
        }
        else
        {
            return sumofodd(lowerLim + 1, upperLim, sum);
        }
    }
}
void printn(int num, string key)
{
    // base case
    if (num == 0)
        return;
    cout << key;
    printn(num - 1, key);
}

// function to print the pattern
void q5(string key, int n, int n2)
{
    // base case
    if (n == 0)
        return;
    printn(n2, key);
    cout << endl;

    // recursively calling pattern()
    q5(key, n - 1, n2);
}

int main()
{
    cout << sumofeven(1, 10, 0);

    return 0;
}