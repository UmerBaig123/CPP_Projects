#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> setA = {"1", "2", "3", "4"};
    vector<string> setB = {"A", "B", "C", "D"};
    vector<string> result;
    for (int i = 0; i < setA.size(); i++)
    {
        for (int x = 0; x < setB.size(); x++)
        {
            result.push_back(setA[i] + " , " + setB[x]);
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}