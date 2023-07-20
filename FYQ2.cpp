//Declare a one-dimensional aray of type float name monthlySales to keep monthly sales from january 2020 to december 2020. Then ask the user to enter the monthly sales and store it in the array
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float monthlySales[12];
    float totalSales = 0;
    float highestSales = 0;
    float highestSalesMonth = 0;
    float targetSales = 10000;

    for (int i = 1; i <= 12; i++) 
    {
    cout << "Enter monthly sales for month " << i << ": ";
    cin >> monthlySales[i - 1];

    if (monthlySales[i - 1] > highestSales) 
    {
      highestSales = monthlySales[i - 1];
      highestSalesMonth = i;
    }

    if (monthlySales[i-1] >= targetSales)
    cout << "Monthly target is achieved for month " << i << endl;
    else
    {
        cout << "Need to work smart for month " << i << endl;
    }
    }

    for (int i = 0; i < 12; i++) 
    {
        totalSales += monthlySales[i];
    } 
    cout << "Total sales for the year is: " << totalSales << endl;
    cout << "The highest monthly sales is RM " << highestSales << " in month " << highestSalesMonth << endl;

  return 0;
}