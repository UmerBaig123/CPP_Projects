#include <iostream>
#include <vector>
using namespace std;

int main()
{
    bool stop = true;
    string str;
    cin >> str;
    vector<char> substr;
    for (int i = 0; i < str.length(); i++)
    {

        for (int x = 0; x < substr.size(); x++)
        {
            if (substr[x] == str[i])
            {
                stop = false;
            }
        }
        if (stop)
        {
            substr.push_back(str[i]);
        }
    }
    for (int i = 0; i < substr.size(); i++)
    {
        cout << substr[i];
    }

    return 0;
}