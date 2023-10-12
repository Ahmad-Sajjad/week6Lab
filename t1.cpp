#include <iostream>
using namespace std;
bool greaterNumber(float n1, float n2);
main()
{
    float n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    greaterNumber(n1, n2);
    cout << greaterNumber(n1, n2);
}
bool greaterNumber(float n1, float n2)
{
    if (n1 > n2)
    {
        return 1;
    }
    if (n2 < n1)
    {
        return 0;
    }
}