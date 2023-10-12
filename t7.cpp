#include <iostream>
using namespace std;
float discount(string month, string day, float amount);
main()
{
    string month, day;
    float amount;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;
    discount(day, month, amount);
    cout << "Payable Amount after discount: " << discount(month, day, amount);
}
float discount(string month, string day, float amount)
{
    float finalAmount = amount;
    if (day == "Sunday" && (month == "October" || month == "August" || month == "March"))
    {
        float finalAmount = amount - (amount * 0.1);
        return finalAmount;
    }
    return finalAmount;
}