#include <iostream>
using namespace std;
float totalIncome(string type, float rows, float columns);
main()
{
    string type;
    float rows, columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> type;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout<<totalIncome(type,rows,columns);
}
float totalIncome(string type, float rows, float columns)
{
    if (type == "Premiere"){
        float total  = rows * columns * 12.00;
        return total;
    }
    if (type == "Normal"){
        float total  = rows * columns * 7.50;
        return total;
    }
    if (type == "Discount"){
        float total  = rows * columns * 5.00;
     return total;
    }
}