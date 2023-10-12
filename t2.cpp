#include <iostream>
using namespace std;
bool parityAnalysis(int num);
main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    parityAnalysis(num);
    cout << parityAnalysis(num);
}
bool parityAnalysis(int num)
{

    int mod1;
    mod1 = num % 10;
    int num1;
    num1 = num / 10;
    int mod2;
    mod2 = num1 % 10;
    int num2;
    num2 = num1 / 10;
    int mod3;
    mod3 = num2 % 10;
    int num3;
    num3 = mod3 + mod2 + mod1;
    if (num % 2 == 0 && num3 % 2 == 0)
    {
        return 1;
    }
    if (num % 2 == 1 && num3 % 2 == 1)
    {
        return 0;
    }
}