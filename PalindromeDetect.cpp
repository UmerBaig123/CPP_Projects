#include <iostream>
using namespace std;
void check(string name)
{
	string firstHalf;
	string secondHalf;
	for (int i = 0; i < name.length() / 2; i++)
	{
		firstHalf += name[i];
		secondHalf += name[(name.length() - 1) - i];
	}
	if (firstHalf == secondHalf)
	{
		cout << "The word is a palindrome";
	}
	else
	{
		cout << "The word is not a palindrome";
	}
}
int main()
{
	cout << "hi" << endl;
	string name;
	cin >> name;
	check(name);
}