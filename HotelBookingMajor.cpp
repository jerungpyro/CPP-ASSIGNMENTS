//C++ code on hotel booking system that ask the user to enter the customer's name, room code using RDSE, number of days, and payment method
//Customer can choose to pay using a credit card or by cash
//The program will calculate the total price need to be paid by the customer including an additional 6% government tax.
//If the user choose to pay using credit card, 10% discount will be given to the total price.
//The program will display the total bill need to be paid by the customer.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int days;
    char roomcode;
    char payment;
    double totalprice, price, discount, tax;
    const double taxrate = 0.06;

    cout << "          Welcome to Beyond Hotel           " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "| Room Code | Room Type  | Price Per Night |" << endl;
    cout << "|     R     |  Superior  |      RM 170     |" << endl;
    cout << "|     D     |  Deluxe    |      RM 150     |" << endl;
    cout << "|     S     |  Standard  |      RM 130     |" << endl;
    cout << "|     E     |  Economy   |      RM 90      |" << endl;
    cout << "-------------------------------------------" << endl;


    cout << "Enter customer's name: ";
    getline (cin, name);

    cout << "Enter room code: ";
    cin >> roomcode;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Please enter payment method (C for credit card, S for cash): ";
    cin >> payment;

    if (roomcode == 'R')
    {
        price = 170;
    }
    else if (roomcode == 'D')
    {
        price = 150;
    }
    else if (roomcode == 'S')
    {
        price = 130;
    }
    else if (roomcode == 'E')
    {
        price = 90;
    }
    else
    {
        cout << "Invalid room code" << endl;
    }

    totalprice = price * days;

    if (payment == 'C' || payment == 'c')
    {
        discount = totalprice * 0.1;
        totalprice = totalprice - discount;
    }
    else if (payment == 'S' || payment == 's')
    {
        discount = 0;
    }
    else
    {
        cout << "Invalid payment method" << endl;
    }

    tax = totalprice * taxrate;
    totalprice = totalprice + tax;

    cout << "-------------------------------------------" << endl;
    cout << "Customer's name: " << name << endl;
    cout << "Room code: " << roomcode << endl;
    cout << "Number of days: " << days << endl;
    cout << "Total price: RM " << totalprice << endl;
    cout << "-------------------------------------------" << endl;

    return 0;



}