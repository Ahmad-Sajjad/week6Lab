#include <iostream>
using namespace std;
float perimeter(char letter, float value);
main()
{
    float value;
    char letter;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> letter;
    cout << "Enter the value: ";
    cin >> value;
    perimeter(value, letter);
    cout << "The perimeter is: " << perimeter(letter, value);
}
float perimeter(char letter, float value)
{
    if (letter == 's')
    {
        float perimeter = value * 4;
        return perimeter;
    }
    if (letter == 'c')
    {
        float perimeter = 6.28 * value;
        return perimeter;
    }
    if (letter == 't')
    {
        float perimeter = value * 3;
        return perimeter;
    }
    if (letter == 'h')
    {
        float perimeter = value * 6;
        return perimeter;
    }
}