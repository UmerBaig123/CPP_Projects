#include <iostream>
using namespace std;

int q1()
{
    float radius;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    cout << 3.14 * radius * radius << endl;
    return 0;
}
int q2()
{
    float farenheit;
    cout << "Enter temperature in farenheit" << endl;
    cin >> farenheit;
    cout << "Temperature in Centigrade: " << (farenheit - 32) * 5 / 9 << endl;
    return 0;
}
int q3()
{
    float rad;
    cout << "Input the radius of the sphere" << endl;
    cin >> rad;
    // as 4/3=1.3333333... and 1.33333.. goes to infinite and cpp stores it as 1 so I did the following
    cout << (4 * 3.14 * rad * rad * rad) / 3 << endl;
    return 0;
}
int q4()
{
    string name, jobT;
    int age;
    cout << "Enter name of the employee" << endl;
    cin >> name;
    cout << "Enter age of the employee" << endl;
    cin >> age;
    cout << "Enter job title of the employee" << endl;
    cin >> jobT;
    cout << endl;
    cout << "Employee name: " << name << endl;
    cout << "Employee age: " << age << endl;
    cout << "Employee job title: " << jobT << endl;
    return 0;
}
int q5()
{
    int expenses, sum = 0;
    cout << "Enter transport expense" << endl;
    cin >> expenses;
    sum += expenses;
    cout << "Enter expenses on food" << endl;
    cin >> expenses;
    sum += expenses;
    cout << "Enter accomodation expenses" << endl;
    cin >> expenses;
    sum += expenses;
    cout << "Enter lodging expenses" << endl;
    cin >> expenses;
    sum += expenses;
    cout << "Enter miscellaneous expenses" << endl;
    cin >> expenses;
    sum += expenses;
    cout << sum << endl;
    return 0;
}