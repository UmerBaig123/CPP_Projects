#include <iostream>
#include <cmath>
using namespace std;

//                      Search a problem (ctrl+f) question1 or Challenge problem2
// questions start from line 334
// functions
// function to add digits of integer
int intSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
// function to print digits of integer
int intSeparate(int num)
{
    int sum = 0;
    while (num != 0)
    {
        cout << (num % 10) << " ";
        num /= 10;
    }
    return sum;
}
// function to check if an int is even
bool isEven(int num)
{
    return num % 2 == 0;
}
// function to find the greatest
int greatest(float num1, float num2, float num3, float num4, float num5, float check)
{
    float max = num1, secondMax = num2;
    if (num2 >= max)
    {
        max = num2;
        secondMax = num1;
    }
    if (num3 >= max)
    {
        secondMax = max;
        max = num3;
    }
    if (num4 >= max)
    {
        secondMax = max;
        max = num4;
    }
    if (num5 >= max)
    {
        secondMax = max;
        max = num5;
    }
    if (check == 1)
    {
        return max;
    }
    else
    {

        return secondMax;
    }
}
// function to find greatest gradest of sections
int sectionGreatest(float num1, float num2, float num3, float num4, float num5, float num6, string S1, string S2, string S3, string S4, string S5, string S6)
{
    bool stop = true;
    int max = num1;
    if (num2 >= max)
    {
        max = num2;
    }
    if (num3 >= max)
    {
        max = num3;
    }
    if (num4 >= max)
    {
        max = num4;
    }
    if (num5 >= max)
    {
        max = num5;
    }
    if (num5 >= max)
    {
        max = num5;
    }
    if (max == num1 && stop)
    {
        cout << S1 << " Section has the greatest average of " << max << endl;
        stop = false;
    }
    if (max == num2 && stop)
    {
        cout << S2 << " Section has the greatest average of " << max << endl;
        stop = false;
    }
    if (max == num3 && stop)
    {
        cout << S3 << " Section has the greatest average of " << max << endl;
        stop = false;
    }
    if (max == num4 && stop)
    {
        cout << S4 << " Section has the greatest average of " << max << endl;
        stop = false;
    }
    if (max == num5 && stop)
    {
        cout << S5 << " Section has the greatest average of " << max << endl;
        stop = false;
    }
    if (max == num6 && stop)
    {
        cout << S6 << " Section has the greatest average of " << max << endl;
        stop = false;
    }
    return 0;
}
// function to check if a char is capital
bool isCapital(char a)
{
    return a >= 'A' && a <= 'Z';
}
// function to check if a char is small
bool isSmall(char a)
{
    return a >= 'a' && a <= 'z';
}
// function to check if a char is capital or small or not an alphabet
int letterType(int in)
{
    if (isCapital(in))
    {
        return 1;
    }
    else if (isSmall(in))
    {
        return 2;
    }
    else
    {
        return 3;
    }

    return 0;
}
// function to check if shape is a square
bool isSquare(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{

    int xDiff1, yDiff1, xDiff2, yDiff2;
    if (x1 - x2 == 0)
    {
        yDiff1 = y1 - y2;
        xDiff1 = x2 - x3;
        yDiff2 = y3 - y4;
        xDiff2 = x1 - x4;
    }
    else
    {
        xDiff1 = x1 - x2;
        xDiff2 = x3 - x4;
        yDiff1 = y1 - y4;
        yDiff2 = y2 - y3;
    }
    xDiff1 *= xDiff1 < 0 ? -1 : 1;
    xDiff2 *= xDiff2 < 0 ? -1 : 1;
    yDiff1 *= yDiff1 < 0 ? -1 : 1;
    yDiff2 *= yDiff2 < 0 ? -1 : 1;
    return xDiff1 == xDiff2 && yDiff1 == yDiff2 && xDiff1 == yDiff1;
}
// function to check if shape is a rectangle
bool isRectangle(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{

    int xDiff1, yDiff1, xDiff2, yDiff2;
    if (x1 - x2 == 0)
    {
        yDiff1 = y1 - y2;
        xDiff1 = x2 - x3;
        yDiff2 = y3 - y4;
        xDiff2 = x1 - x4;
    }
    else
    {
        xDiff1 = x1 - x2;
        xDiff2 = x3 - x4;
        yDiff1 = y1 - y4;
        yDiff2 = y2 - y3;
    }
    xDiff1 *= xDiff1 < 0 ? -1 : 1;
    xDiff2 *= xDiff2 < 0 ? -1 : 1;
    yDiff1 *= yDiff1 < 0 ? -1 : 1;
    yDiff2 *= yDiff2 < 0 ? -1 : 1;
    return xDiff1 == xDiff2 && yDiff1 == yDiff2;
}
// function to check if shape is a quadrilateral
bool isQuadrilateral(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    return !isSquare(x1, x2, x3, x4, y1, y2, y3, y4) && !isRectangle(x1, x2, x3, x4, y1, y2, y3, y4);
}
// function convert a single digit int into its name
void Digit2Word(int num)
{
    switch (num)
    {
    case 0:
        cout << "zero ";
        break;
    case 1:
        cout << "one ";
        break;
    case 2:
        cout << "two ";
        break;
    case 3:
        cout << "three ";
        break;
    case 4:
        cout << "four ";
        break;
    case 5:
        cout << "five ";
        break;
    case 6:
        cout << "six ";
        break;
    case 7:
        cout << "seven ";
        break;
    case 8:
        cout << "eight ";
        break;
    case 9:
        cout << "nine ";
        break;

    default:
        break;
    }
}
// function to convert every digit of an int into words
void eachD2W(int num)
{
    while (num != 0)
    {
        Digit2Word(num % 10);
        num /= 10;
    }
}
// function for grading
char grading(int marks)
{
    if (marks >= 90 && marks <= 100)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >= 60)
    {
        return 'D';
    }
    else if (marks >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}
// calculator function
void calculate(int num1, char op, int num2)
{
    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    case '%':
        cout << num1 % num2;
        break;

    default:
        break;
    }
}
// function to calculate investment to avoid taxes
void taxes(int n)
{
    for (int i = 0; i < n; i++)
    {
        float a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a - b << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
// function to find roots
void roots(float a, float b, float c)
{
    cout << (-b + sqrt((b * b) - (4 * a * c))) / (2 * a) << endl;
    cout << (-b - sqrt((b * b) - (4 * a * c))) / (2 * a) << endl;
}
// Question1
int main1()
{
    int num;
    cout << "Enter the integer" << endl;
    cin >> num;
    cout << intSum(num) << endl;
    return 0;
}
// Question2
int main2()
{
    int num;
    cout << "Enter the integer" << endl;
    cin >> num;
    intSeparate(num);
    cout << endl;
    return 0;
}
// Question3
int main3()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    if (isEven(num))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
// Question4
int main4()
{
    float num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << "The max number is:  " << greatest(num1, num2, num3, num4, num5, 1) << endl;
    cout << "The second max number is:  " << greatest(num1, num2, num3, num4, num5, 0) << endl;
    return 0;
}
// Question5
int main5()
{
    float Av1, Av2, Av3, Av4, Av5, Av6;
    string S1, S2, S3, S4, S5, S6;
    cout << "Enter Averages of 6 sections with section and average respectively" << endl;
    cin >> S1 >> Av1 >> S2 >> Av2 >> S3 >> Av3 >> S4 >> Av4 >> S5 >> Av5 >> S6 >> Av6;
    sectionGreatest(Av1, Av2, Av3, Av4, Av5, Av6, S1, S2, S3, S4, S5, S6);
    return 0;
}
// Question6
int main6()
{
    char in;
    cout << "Enter character" << endl;
    cin >> in;
    switch (letterType(in))
    {
    case 1:
        cout << "Capital Letter" << endl;
        break;
    case 2:
        cout << "Small Letter" << endl;
        break;
    case 3:
        cout << "Normal" << endl;
        break;
    }
    return 0;
}
// Question7
int main7()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    int xDiff1, yDiff1, xDiff2, yDiff2;
    cout << "Enter 4 points" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (isSquare(x1, x2, x3, x4, y1, y2, y3, y4))
    {
        cout << "Square" << endl;
    }
    else if (isRectangle(x1, x2, x3, x4, y1, y2, y3, y4))
    {
        cout << "Rectangle" << endl;
    }
    if (isQuadrilateral(x1, x2, x3, x4, y1, y2, y3, y4))
    {
        cout << "Quadrilateral" << endl;
    }

    return 0;
}
// Question8
int main8()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    eachD2W(num);
    return 0;
}
// Question9
int main9()
{
    float marks;
    cout << "Enter marks" << endl;
    cin >> marks;
    cout << "Grade = " << grading(marks) << endl;
    return 0;
}
// Question10
int main10()
{
    int num1, num2;
    char op;
    cout << "Enter first number, operation and second number respectively" << endl;
    cin >> num1 >> op >> num2;
    calculate(num1, op, num2);
    return 0;
}
// Challenge problem1
int main11()
{
    int n;
    cout << "Enter number of test cases" << endl;
    cin >> n;
    taxes(n);
    return 0;
}
// Challenge problem2
int main12()
{
    float a, b, c;
    cout << "Enter values of A,B and C respectively" << endl;
    cin >> a >> b >> c;
    roots(a, b, c);
    return 0;
}
int main() {}