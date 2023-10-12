#include <iostream>
using namespace std;
bool areSameNumber(float n1, float n2, float n3);
main()
{
    float n1, n2, n3;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    areSameNumber(n1, n2, n3);
    cout << areSameNumber(n1, n2, n3);
}
bool areSameNumber(float n1, float n2, float n3)
{
    if (n1 == n2 && n2 == n3)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}