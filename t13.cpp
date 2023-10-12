#include <iostream>
using namespace std;
float lowestPrice(float distance, string period);
main()
{
    string period;
    float distance;
    cout << "Enter the number of kilometers: ";
    cin >> distance;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;
    cout << "Lowest price for " << distance << " kilometers: " << lowestPrice(distance, period) << " EUR";
}
float lowestPrice(float distance, string period)
{
    if (distance <= 20 && period == "day")
    {
        float rate = 0.70 + (0.79 * distance);
        return rate;
    }
    if (distance <= 20 && period == "night")
    {
        float rate = 0.70 + (0.90 * distance);
        return rate;
    }
    if (distance > 20 && distance <= 100)
    {
        float rate = 0.09 * distance;
        return rate;
    }
    if (distance > 100)
    {
        float rate = 0.06 * distance;
        return rate;
    }
}