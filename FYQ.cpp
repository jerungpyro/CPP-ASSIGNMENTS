#include <iostream>

using namespace std;

int main()
{
    char status, packageID;
    int numHours;
    double totalPrice;

    cout << "Please Choose M/N for Member/Non-Member: " << endl;
    cin >> status;
    cout << endl;

    if (status == 'M' || status == 'm')
    {
        cout << "Package Type | Package Code | Price per hour (RM)" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Galaxy       | G             | 70.00" << endl;
        cout << "Star         | S             | 45.00" << endl;
        cout << "Normal       | N             | 30.00" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Please choose package type: " << endl;
        cin >> packageID;
        cout << endl;
        cout << "Please enter number of hours: " << endl;
        cin >> numHours;
        cout << endl;
        
        switch (packageID)
    {
    case 'G':
        totalPrice = numHours * 70 * 0.77;
        cout << "The total price you need to pay is RM" << totalPrice << endl;
        break;
    case 'S':
        totalPrice = numHours * 45 * 0.8;
        cout << "The total price you need to pay is RM" << totalPrice << endl;
        break;
    case 'N':
        totalPrice = numHours * 30 * 0.85;
        cout << "The total price you need to pay is RM" << totalPrice << endl;
        break;
    
    default:
    cout << "Invalid type of package or package code." << endl;
        break;
    }
    }

    if(status == 'N' || status == 'n')
    {
        cout << "Package Type | Package Code | Price per hour (RM)" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Galaxy       | G             | 78.00" << endl;
        cout << "Star         | S             | 55.00" << endl;
        cout << "Normal       | N             | 38.00" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Please choose package type: " << endl;
        cin >> packageID;
        cout << endl;
        cout << "Please enter number of hours: " << endl;
        cin >> numHours;
        cout << endl;

        switch (packageID)
    {
    case 'G':
        totalPrice = numHours * 70 * 0.82;
        cout << "The total price you need to pay is RM" << totalPrice << endl;
        break;
    case 'S':
        totalPrice = numHours * 45 * 0.85;
        cout << "The total price you need to pay is RM" << totalPrice << endl;
        break;
    case 'N':
        totalPrice = numHours * 30 * 0.9;
        cout << "The total price you need to pay is RM" << totalPrice << endl;
        break;
    
    default:
    cout << "Invalid type of package or package code." << endl;
        break;
    }
    }
    
}