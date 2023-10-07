#include <iostream>
using namespace std;

// Question 1
int main1()
{
    float marks;
    cout << "Enter Marks" << endl;
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "A grade" << endl;
    }
    else if (marks >= 80 && marks <= 100)
    {
        cout << "B grade" << endl;
    }
    else if (marks >= 70 && marks <= 100)
    {
        cout << "C grade" << endl;
    }
    else if (marks >= 60 && marks <= 100)
    {
        cout << "D grade" << endl;
    }
    else if (marks >= 50 && marks <= 100)
    {
        cout << "E grade" << endl;
    }
    else if (marks <= 50 && marks >= 0)
    {
        cout << "F grade" << endl;
    }
    else
    {
        cout << "Invalid marks";
    }

    return 0;
}

// Question 2
int main2()
{

    string isLoop;
    cout << "enter in form:\nx\n*\ny" << endl;
    float Num1;
    char Operation;
    float Num2;
    cin >> Num1;
    cin >> Operation;
    cin >> Num2;
    if (Operation == '/')
    {
        cout << Num1 / Num2;
    }
    else if (Operation == '*')
    {
        cout << Num1 * Num2;
    }
    else if (Operation == '-')
    {
        cout << Num1 - Num2;
    }
    else if (Operation == '+')
    {
        cout << Num1 + Num2;
    }

    return 0;
}

// Question 3
int main3()
{
    int firstNum, secondNum;
    cout << "Enter Two Numbers" << endl;
    cin >> firstNum >> secondNum;
    cout << firstNum / secondNum;
    cout << " * ";
    cout << secondNum;

    if (firstNum % secondNum != 0)
    {
        cout << " + ";
        cout << firstNum % secondNum;
    }
    return 0;
}

// Question 4
int main4()
{
    char firstP, secondP;
    int firstPNum, secondPNum;
    cout << "enter the first players choice" << endl;
    cin >> firstP;
    cout << "enter the second players choice" << endl;
    cin >> secondP;

    switch (firstP)
    {
    case 'r':
        firstPNum = 0;
        break;
    case 'p':
        firstPNum = 1;
        break;
    case 's':
        firstPNum = 2;
        break;

    default:
        cout << "input invalid";
        break;
    }
    switch (secondP)
    {
    case 'r':
        secondPNum = 0;
        break;
    case 'p':
        secondPNum = 1;
        break;
    case 's':
        secondPNum = 2;
        break;

    default:
        cout << "input invalid";
        break;
    }
    int result = firstPNum - secondPNum;
    if (result == 0)
    {
        cout << "It is a draw";
    }
    else if (result == 1 || result == -2)
    {
        cout << "First player wins";
    }
    else
    {
        cout << "Second Player wins";
    }
    return 0;
}

// Question 5A
int main5()
{
    int num1, num2, num3, num4, num5;
    bool stop = true;
    cout << "Enter 5 Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5 && stop)
    {
        cout << num1 << " is the greatest";
        stop = false;
    }
    if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5 && stop)
    {
        cout << num2 << " is the greatest";
        stop = false;
    }
    if (num3 >= num2 && num3 >= num1 && num3 >= num4 && num3 >= num5 && stop)
    {
        cout << num3 << " is the greatest";
        stop = false;
    }
    if (num4 >= num2 && num4 >= num3 && num4 >= num1 && num4 >= num5 && stop)
    {
        cout << num4 << " is the greatest";
        stop = false;
    }
    if (num5 >= num2 && num5 >= num3 && num5 >= num4 && num5 >= num1 && stop)
    {
        cout << num5 << " is the greatest";
        stop = false;
    }
    return 0;
}

// Question 5B
int main6()
{
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
    {
        cout << num1 << " is the greatest";
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
    {
        cout << num2 << " is the greatest";
    }
    else if (num3 >= num2 && num3 >= num1 && num3 >= num4 && num3 >= num5)
    {
        cout << num3 << " is the greatest";
    }
    else if (num4 >= num2 && num4 >= num3 && num4 >= num1 && num4 >= num5)
    {
        cout << num4 << " is the greatest";
    }
    else if (num5 >= num2 && num5 >= num3 && num5 >= num4 && num5 >= num1)
    {
        cout << num5 << " is the greatest";
    }

    return 0;
}

// Question 5C
int main7()
{
    int max;
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    max = num1;
    if (max < num2)
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }
    if (max < num4)
    {
        max = num4;
    }
    if (max < num5)
    {
        max = num5;
    }
    cout << max << " is the greatest";
    return 0;
}

// Question 5D
int main8()
{
    int max;
    int n;
    cout << "Enter 5 Numbers" << endl;
    cin >> n;
    max = n;
    cin >> n;
    if (n > max)
    {
        max = n;
    }
    cin >> n;
    if (n > max)
    {
        max = n;
    }
    cin >> n;
    if (n > max)
    {
        max = n;
    }
    cin >> n;
    if (n > max)
    {
        max = n;
    }
    cout << max << " is the greatest Number";
    return 0;
}

// Question 6A
int main9()
{
    int num1, num2, num3, num4, num5;
    bool stop = true;
    cout << "Enter 5 Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5 && stop)
    {
        cout << num1 << " is the smallest";
        stop = false;
    }
    if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5 && stop)
    {
        cout << num2 << " is the smallest";
        stop = false;
    }
    if (num3 <= num2 && num3 <= num1 && num3 <= num4 && num3 <= num5 && stop)
    {
        cout << num3 << " is the smallest";
        stop = false;
    }
    if (num4 <= num2 && num4 <= num3 && num4 <= num1 && num4 <= num5 && stop)
    {
        cout << num4 << " is the greatest";
        stop = false;
    }
    if (num5 <= num2 && num5 <= num3 && num5 <= num4 && num5 <= num1 && stop)
    {
        cout << num5 << " is the greatest";
        stop = false;
    }
    return 0;
}

// Question 6B
int main10()
{
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
    {
        cout << num1 << " is the smallest";
    }
    else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5)
    {
        cout << num2 << " is the smallest";
    }
    else if (num3 <= num2 && num3 <= num1 && num3 <= num4 && num3 <= num5)
    {
        cout << num3 << " is the smallest";
    }
    else if (num4 <= num2 && num4 <= num3 && num4 <= num1 && num4 <= num5)
    {
        cout << num4 << " is the smallest";
    }
    else if (num5 <= num2 && num5 <= num3 && num5 <= num4 && num5 <= num1)
    {
        cout << num5 << " is the smallest";
    }

    return 0;
}

// Question 6C
int main11()
{
    int min;
    int num1, num2, num3, num4, num5;
    cout << "Enter 5 Numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    min = num1;
    if (min > num2)
    {
        min = num2;
    }
    if (min > num3)
    {
        min = num3;
    }
    if (min > num4)
    {
        min = num4;
    }
    if (min > num5)
    {
        min = num5;
    }
    cout << min << " is the smallest";
    return 0;
}

// Question 7
int main12()
{
    cout << "Enter Ammount" << endl;
    int amm;
    cin >> amm;
    if (amm > 100)
    {
        if (amm > 200)
        {
            if (amm > 400)
            {
                if (amm > 800)
                {
                    cout << amm - (amm * 0.25);
                }
                else
                {

                    cout << amm - (amm * 0.2);
                }
            }
            else
            {

                cout << amm - (amm * 0.1);
            }
        }
        else
        {
            cout << amm - (amm * 0.05);
        }
    }
    else
    {
        cout << amm;
    }
    return 0;
}

// Question 8
int main13()
{
    int weight;
    cout << "Enter the weight of the parcel" << endl;
    cin >> weight;
    int additional = 0;
    if (weight >= 2)
    {
        additional += (weight - 2) * 4;
    }
    cout << 28.50 + additional;
    return 0;
}