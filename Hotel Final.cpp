#include <iostream>
#include <string>

using namespace std;

// declare function
double calculation(double price, int quantity);
double calculation2(double payment, int duration);
double overall(double total_cash, double total_payment);

// main class
int main()
{
  // declare variables
  string name, hp, room;
  int day1, mon1, day2, mon2, choice, quantity, people, duration;
  double price, payment, total_payment, cash, balance, total_cash = 0;

  // request information
  cout << "-----Welcome To Cengal Hotel!-----\n\n";
  cout << "Please enter your name and phone number.\n";
  cout << "Name: ";
  getline(cin, name);
  cout << "Phone number : ";
  getline(cin, hp);
  cout << "\nPlease enter the Check-In Date.\n";
  cout << "Day: ";
  cin >> day1;
  cout << "Month : ";
  cin >> mon1;
  cout << "Please enter your Check-out date:\n";
  cout << "Day: ";
  cin >> day2;
  cout << "Month : ";
  cin >> mon2;

  // day statement
  if (day2 < day1)
  {
    // borrow days from february
    if (mon2 == 2)
    {
      day2 += 28;
    }
    // borrow days from April or June or September or November
    else if (mon2 == 4 || mon2 == 6 || mon2 == 9 || mon2 == 11)
    {
      day2 += 30;
    }
    // borrow days from Jan or Mar or May or July or Aug or Oct or Dec
    else
    {
      day2 += 31;
    }
    mon2 = mon2 - 1;
  }
  cout << "\nPlease enter number of people: ";
  cin >> people;
  cout << "\nPlease choose room from the list below.\n";

// Declare an array of strings called rooms. Each string contains a room type and a price
string rooms[] = 
{
  "Single Room (1 person) (RM29.99)",
  "Deluxe/Seafront Single Room (1 person) (RM35.00)",
  "Queen Room (2 people) (RM59.99)",
  "Deluxe/Seafront Queen Room (2 people) (RM75.00)",
  "Family Room (3-5 people) (RM99.99)",
  "Deluxe/Seafront Family Room (3-5 people) (RM124.99)"
};

// Loop through each element in the rooms array and display each room type and price
for (int i = 0; i < sizeof(rooms) / sizeof(rooms[0]); i++) 
{
  cout << i + 1 << ". " << rooms[i] << endl;
}

  cout << "7. Cancel booking.\n\n";
  cout << "Room: ";
  cin >> choice;
  cout << "\n";

  // choice statement
  if (choice >= 1 && choice <= 6)
  {
    price = (choice == 1) ? 29.99 :
            (choice == 2) ? 35.00 :
            (choice == 3) ? 59.99 :
            (choice == 4) ? 75.00 :
            (choice == 5) ? 99.99 :
              124.99;

    room = rooms[choice - 1];

    cout << "Please enter number of rooms to be booked. \nQuantity: ";
    cin >> quantity;
  }
  else
  {
    cout << "We are sorry that we weren't able to find a room suitable for your needs.";
    exit(0);
  }

  //process
    duration = day2 - day1;
    payment = calculation(price, quantity);
    total_payment = calculation2(payment, duration);
    cout << "\nThe total price you need to pay is RM" << total_payment << endl;
    do
    {
        cout << "Enter cash: ";
        cin >> cash;
        total_cash = total_cash + cash;
        if (total_cash < total_payment)
        {
            cout << "You entered cash below the total price! Please add more cash." << endl;
        }
    } while (total_cash < total_payment);
    cout << "\nYou entered total cash of RM" << total_cash << endl;
    balance = overall(total_cash, total_payment);
    
    //display output or receipt
    cout << "\n\n\n";
    cout << "------------------------------------------------------------\n\n";
    cout << "-Cengal Hotel Booking Receipt-\n";
    cout << "| Name: " << name << endl;
    cout << "| Phone Number: " << hp << endl;
    cout << "| Reserved Date: " << day1 << "/" << mon1 << " - ";
    if (day2 > 31)
    {
        if (mon2 == 2)
        {
            day2 -= 28;
            mon2++;
        }
        else if (mon2 == 4 || mon2 == 6 || mon2 == 9 || mon2 == 11)
        {
            day2 -= 30;
            mon2++;
        }
        else
        {
            day2 -= 31;
            mon2++;
        }
    }
    cout << day2 << "/" << mon2 << endl;
    cout << "| Stay Duration " << duration + 1 << " Day " << duration << " Night " << endl;
    cout << "| Room Selected: " << room << " x " << quantity << endl;
    cout << "| TOTAL PRICE: RM" << total_payment << endl;
    cout << "| CASH: RM" << total_cash << endl;
    cout << "| BALANCE: RM" << balance << endl;
    cout << "\nThank you for choosing Cengal Hotel! Please come again.\n";
    cout << "------------------------------------------------------------\n";
    return 0;
}
//payment calculation
double calculation(double price, int quantity)
{
    double total1;
    total1 = price * quantity;
    return total1;
}
//total payment calculation
double calculation2(double payment, int duration)
{
    double total2;
    total2 = payment * duration;
    return total2;
}
//balance calculation
double overall(double total_cash, double total_payment)
{
    double total3;
    total3 = total_cash - total_payment;
    return total3;
}
