#include <iostream>
#include <ctime>
using namespace std;

bool isLeap(int year)
{
    bool leap;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap = true;
            }
            else
            {
                leap = false;
            }
        }
    }
    else
    {
        leap = false;
    }
    return leap;
}

int dayOfMonth(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if (month == 3)
    {
        if (isLeap(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 30;
    }
}
void currentDate(int &day, int &month, int &year)
{
    time_t date = time(0);
    tm *tm_local = localtime(&date);
    day = tm_local->tm_mday;
    month = tm_local->tm_mon;
    year = 1900 + tm_local->tm_year;
}
bool validDate(int day, int month, int year, int cDay, int cMonth, int cYear)
{
    if (year < 0 || year > cYear)
    {
        return false;
    }
    else if (month < 1 || month > 12 || (year == cYear && month > cMonth))
    {
        return false;
    }
    else if (day < 1 || day > dayOfMonth(month, year) || (month == cMonth && year == cYear && day > cDay))
    {
        return false;
    }
    else
    {
        return true;
    }
}
void inputDOB(int &day, int &month, int &year, string type)
{
    cout << "Enter " + type + " Date" << endl;
    cin >> day >> month >> year;
}
void calculate(int day, int month, int year, int cDay, int cMonth, int cYear)
{
    int calcDay, calcMonth, calcYear;
    calcYear = cYear - year;
    calcMonth = cMonth - month;
    if (calcMonth < 1)
    {
        // because month must be greater or equal to 1 so we subtract 1 to make 0 -1, -1 -2 and so on
        calcMonth--;
        calcMonth += 12;
        calcYear--;
    }
    calcDay = cDay - day;
    if (calcDay < 1)
    {
        calcDay--;
        calcDay += dayOfMonth(calcMonth, calcYear);
        month--;
    }

    if (calcMonth < 1)
    {
        // because month must be greater or equal to 1 so we subtract 1 to make 0 -1, -1 -2 and so on
        calcMonth--;
        calcMonth += 12;
        calcYear--;
    }

    cout << "Your age is " << calcDay << " days " << calcMonth << " months " << calcYear << " years" << endl;
}
int main()
{
    int dayOfBirth, monthOfBirth, yearOfBirth;
    int cDay, cMonth, cYear;
    inputDOB(dayOfBirth, monthOfBirth, yearOfBirth, "your birth");
    currentDate(cDay, cMonth, cYear);
    if (validDate(dayOfBirth, monthOfBirth, yearOfBirth, cDay, cMonth, cYear))
    {
        calculate(dayOfBirth, monthOfBirth, yearOfBirth, cDay, cMonth, cYear);
    }
    else
    {
        cout << "Invalid date of birth" << endl;
    }
}