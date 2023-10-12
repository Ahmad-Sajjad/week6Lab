#include <iostream>
using namespace std;
string price(string category, int people, float budget);
main()
{
    float budget;
    int people;
    string category;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> people;
    cout << price(category, people, budget);
}
string price(string category, int people, float budget)
{
    float total = 0;
    if (people <= 4 && category == "VIP")
    {
        total = (budget * 0.75) + (499.99 * people);
    }
    else if (people <= 4 && category == "Normal")
    {
        total = (budget * 0.75) + (249.99 * people);
    }
    else if ((people >= 5 && people <= 9) && category == "VIP")
    {
        total = (budget * 0.60) + (499.99 * people);
    }
    else if ((people >= 5 && people <= 9) && category == "Normal")
    {
        total = (budget * 0.60) + (249.99 * people);
    }
    else if ((people >= 10 && people <= 24) && category == "VIP")
    {
        total = (budget * 0.50) + (499.99 * people);
    }
    else if ((people >= 10 && people <= 24) && category == "Normal")
    {
        total = (budget * 0.50) + (249.99 * people);
    }
    else if ((people >= 25 && people <= 49) && category == "VIP")
    {
        total = (budget * 0.40) + (499.99 * people);
    }
    else if ((people >= 25 && people <= 49) && category == "Normal")
    {
        total = (budget * 0.40) + (249.99 * people);
    }
    else if ((people >= 50) && category == "VIP")
    {
        total = (budget * 0.25) + (499.99 * people);
    }
    else if ((people >= 25 && people <= 49) && category == "Normal")
    {
        total = (budget * 0.25) + (249.99 * people);
    }
    if (total < budget)
    {
        total = budget - total;
        string final = to_string(total);
        string result = "Yes! You have " + final + " leva left.";
        return result;
    }
    else if (total > budget)
    {
        total = total - budget;
        string final = to_string(total);
        string result = "Not enough money! You need " + final + " leva.";
        return result;
    }
}