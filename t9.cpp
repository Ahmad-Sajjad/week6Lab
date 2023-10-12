#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    char gender;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    checkTitle(age, gender);
    cout << "Your personal title is: " << checkTitle(age, gender);
}
string checkTitle(int age, char gender)
{
    if (gender == 'm' && age >= 16)
    {
        string title = "Mr.";
        return title;
    }
    if (gender == 'm' && age < 16)
    {
        string title = "Master";
        return title;
    }
    if (gender == 'f' && age >= 16)
    {
        string title = "Ms.";
        return title;
    }
    if (gender == 'f' && age < 16)
    {
        string title = "Miss";
        return title;
    }
}