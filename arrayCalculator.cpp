#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Made by Muhammad Umer Baig AKA underbaig BSAI23031
// Function to cut off too big strinng value 6.000000-->6.00 made by me myself coz cpp got no built in function
string round(string var)
{
    string rounded;
    for (int i = 0; i < var.length() - 3; i++)
    {
        rounded = rounded + var[i];
    }
    return rounded;
}

// Function to replace a part of vection (1st param) from firstInd to secondInd with float val
// coz cpp got no built in functioooonnnss for this
vector<char> replace(vector<char> vec, int firstInd, int secondInd, float val)
{
    string valString = round(to_string(val));
    vector<char> replaced;
    for (int i = 0; i < firstInd; i++)
    {
        replaced.push_back(vec[i]);
    }
    for (int i = 0; i < valString.length(); i++)
    {
        int index = firstInd + i;
        replaced.push_back(valString[i]);
    }
    for (int i = secondInd; i < vec.size(); i++)
    {
        replaced.push_back(vec[i]);
    }

    return replaced;
}

// Function to find all occurences of char ref in vector vec
vector<int> find(vector<char> Vec, char ref)
{
    vector<int> occurences = {};
    for (int i = 0; i < Vec.size(); i++)
    {
        if (Vec[i] == ref)
        {
            occurences.push_back(i);
        }
    }
    return occurences;
}

// the main calculating function
void calculate(string val)
{
    bool rightCheck = true;
    bool leftCheck = true;
    string value = val;
    int maxRight = 0;
    int maxLeft = 0;
    string firstVal = "";
    string secondVal = "";
    int length = val.length();
    vector<char> myVec;
    for (int i = 0; i < length; i++)
    {
        myVec.push_back(val[i]);
    }
    vector<int> occurences = find(myVec, '/');
    for (int x = 0; x < occurences.size(); x++)
    {
        firstVal = "";
        secondVal = "";
        vector<int> occurence = find(myVec, '/');
        for (int i = 0; i < myVec.size(); i++)
        {
            int checkRight = occurence[0] + i + 1;
            int checkLeft = occurence[0] - i - 1;
            if (rightCheck)
            {
                if (myVec[checkRight] != '/' && myVec[checkRight] != '*' && myVec[checkRight] != '-' && myVec[checkRight] != '+' && checkRight < myVec.size())
                {
                    secondVal = secondVal + myVec[checkRight];
                }
                else
                {
                    maxRight = checkRight - 1;
                    rightCheck = false;
                }
            }
            if (leftCheck)
            {
                if (myVec[checkLeft] != '/' && myVec[checkLeft] != '*' && myVec[checkLeft] != '-' && myVec[checkLeft] != '+' && checkLeft >= 0)
                {
                    firstVal = myVec[checkLeft] + firstVal;
                }
                else
                {
                    maxLeft = checkLeft + 1;
                    leftCheck = false;
                }
            }
        }

        float result = stof(firstVal) / stof(secondVal);
        myVec = replace(myVec, maxLeft, maxRight + 1, result);
        leftCheck = true;
        rightCheck = true;
    }
    vector<int> occurencesM = find(myVec, '*');
    for (int x = 0; x < occurencesM.size(); x++)
    {
        firstVal = "";
        secondVal = "";
        vector<int> occurence = find(myVec, '*');
        for (int i = 0; i < myVec.size(); i++)
        {
            int checkRight = occurence[0] + i + 1;
            int checkLeft = occurence[0] - i - 1;
            if (rightCheck)
            {
                if (myVec[checkRight] != '/' && myVec[checkRight] != '*' && myVec[checkRight] != '-' && myVec[checkRight] != '+' && checkRight < myVec.size())
                {
                    secondVal = secondVal + myVec[checkRight];
                }
                else
                {
                    maxRight = checkRight - 1;
                    rightCheck = false;
                }
            }
            if (leftCheck)
            {
                if (myVec[checkLeft] != '/' && myVec[checkLeft] != '*' && myVec[checkLeft] != '-' && myVec[checkLeft] != '+' && checkLeft >= 0)
                {
                    firstVal = myVec[checkLeft] + firstVal;
                }
                else
                {
                    maxLeft = checkLeft + 1;
                    leftCheck = false;
                }
            }
        }

        float result = stof(firstVal) * stof(secondVal);
        myVec = replace(myVec, maxLeft, maxRight + 1, result);
        leftCheck = true;
        rightCheck = true;
    }
    vector<int> occurencesS = find(myVec, '-');
    for (int x = 0; x < occurencesS.size(); x++)
    {
        firstVal = "";
        secondVal = "";
        vector<int> occurence = find(myVec, '-');
        for (int i = 0; i < myVec.size(); i++)
        {
            int checkRight = occurence[0] + i + 1;
            int checkLeft = occurence[0] - i - 1;
            if (rightCheck)
            {
                if (myVec[checkRight] != '/' && myVec[checkRight] != '*' && myVec[checkRight] != '-' && myVec[checkRight] != '+' && checkRight < myVec.size())
                {
                    secondVal = secondVal + myVec[checkRight];
                }
                else
                {
                    maxRight = checkRight - 1;
                    rightCheck = false;
                }
            }
            if (leftCheck)
            {
                if (myVec[checkLeft] != '/' && myVec[checkLeft] != '*' && myVec[checkLeft] != '-' && myVec[checkLeft] != '+' && checkLeft >= 0)
                {
                    firstVal = myVec[checkLeft] + firstVal;
                }
                else
                {
                    maxLeft = checkLeft + 1;
                    leftCheck = false;
                }
            }
        }

        float result = stof(firstVal) - stof(secondVal);
        myVec = replace(myVec, maxLeft, maxRight + 1, result);
        leftCheck = true;
        rightCheck = true;
    }
    vector<int> occurencesP = find(myVec, '+');
    for (int x = 0; x < occurencesP.size(); x++)
    {
        firstVal = "";
        secondVal = "";
        vector<int> occurence = find(myVec, '+');
        for (int i = 0; i < myVec.size(); i++)
        {
            int checkRight = occurence[0] + i + 1;
            int checkLeft = occurence[0] - i - 1;
            if (rightCheck)
            {
                if (myVec[checkRight] != '/' && myVec[checkRight] != '*' && myVec[checkRight] != '-' && myVec[checkRight] != '+' && checkRight < myVec.size())
                {
                    secondVal = secondVal + myVec[checkRight];
                }
                else
                {
                    maxRight = checkRight - 1;
                    rightCheck = false;
                }
            }
            if (leftCheck)
            {
                if (myVec[checkLeft] != '/' && myVec[checkLeft] != '*' && myVec[checkLeft] != '-' && myVec[checkLeft] != '+' && checkLeft >= 0)
                {
                    firstVal = myVec[checkLeft] + firstVal;
                }
                else
                {
                    maxLeft = checkLeft + 1;
                    leftCheck = false;
                }
            }
        }

        float result = stof(firstVal) + stof(secondVal);
        myVec = replace(myVec, maxLeft, maxRight + 1, result);
        leftCheck = true;
        rightCheck = true;
    }
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i];
    }
}
int main()
{
    string problem;
    while (1)
    {
        cin >> problem;
        calculate(problem);
        cout << endl;
    }
    return 0;
}