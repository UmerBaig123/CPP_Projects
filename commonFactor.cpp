#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num1, num2;
    int smaller;
    vector<int> vec;
    cin >> num1 >> num2;
    if (num1 >= num2)
    {
        smaller = num2;
    }
    else
    {
        smaller = num1;
    }
    for (int i = 1; i <= smaller; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            vec.push_back(i);
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}