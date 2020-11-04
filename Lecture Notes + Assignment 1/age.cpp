#include <iostream>    // Add library iostream to handle basic input/output
#include <string>      // Add library string to enable i/o of words and sentences.

using namespace std;   // Use standard namespace

int main()             // Begin function main() and expect to return integer (int)
{
int age;                     // initialize variable 'age' as integer
int current_year = 2020;     // initialize variable 'current_year' as integer and value to '2020'
int birth_year;              // initialize variable 'birth_year' as integer
string fname;                // initialize variable 'fname' as string
string lname;                // initialize variable 'lname' as string

 cout << "What is your first name?" << endl;    // Ask user to enter first name then go to new line
 cin >> fname;                                  // get input and set it to variable 'fname'

 cout << "What is your last name?" << endl;    // Ask user to enter last name then go to new line
 cin >> lname;                                 // get input and set it to variable 'lname'

 cout << "What year where you born?" << endl;  // Ask user to enter birth year then go to new line
 cin >> birth_year;                            // get input and set value as integer to variable 'birth_year'

 age = current_year - birth_year;              // Calculate age using current_year and birth_year

 cout << "Your name is " << fname << " " << lname << endl;       // Output user name. Format: fname + lname
 cout << "You are currently " << age << " years old" << endl;    // Output calculated age. Format: age + 'years old'
 return 0;                                                       // return 0 to main() to successfully end the function
}