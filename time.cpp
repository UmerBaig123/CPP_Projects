#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int hours, minutes, seconds;
    time_t timer = time(0);
    timer = timer % 86400;
    hours = timer / 3600;
    timer -= hours * 3600;
    minutes = timer / 60;
    seconds = timer - (minutes * 60);
    hours += 5;
    time_t start = time(0);
    while (1)
    {
        if (time(0) - start == 1)
        {
            system("cls");
            cout << hours << ":" << minutes << ":" << seconds << endl;
            start++;
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
                    if (hours <= 24)
                    {
                        hours++;
                    }
                    else
                    {
                        hours = 0;
                    }
                }
            }
        }
    }

    return 0;
}