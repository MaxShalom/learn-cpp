#include <iostream>    // Add library iostream to handle basic input/output

using namespace std;   // Use standard namespace

int main()             // Begin function main() and expect to return integer (int)
{
int pennies;           // initialize variable 'pennies' as integer
int nickels;           // initialize variable 'nickels' as integer
int dimes;             // initialize variable 'dimes' as integer
int quarters;          // initialize variable 'quarters' as integer

cout << "How many pennies do you have?" << endl;     // Ask for quanitities of pennies then go to new line
cin >> pennies;                                      // Set input value to integer pennies

cout << "How many nickels do you have?" << endl;     // Ask for quanitities of nickels then go to new line
cin >> nickels;                                      // Set input value to integer nickels

cout << "How many dimes do you have?" << endl;       // Ask for quanitities of diems then go to new line
cin >> dimes;                                        // Set input value to integer dimes

cout << "How many quarters do you have?" << endl;    // Ask for quanitities of quarters then go to new line
cin >> quarters;                                     // Set input value to integer quarters

 /* Computation of total value */
 double total;                                                                // initialize 'total' as a double (double means 0.00)
 total = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25;    // Total = [# of Coin] x [Value of Coin]
 cout << "Total value of coins: " << total << endl;                           // Output coin value then go to new line

 return 0;             // return 0 to main() to successfully end the function
}