//Fibonacci program
//using for loop
//user can input the first two numbers and the desired fibonacci number

#include <iostream>
using namespace std;

int main()
{
    int first, second, next, c, n;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "First " << n << " terms of Fibonacci series are: " << endl;
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }
    return 0;
}