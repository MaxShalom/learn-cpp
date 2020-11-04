#include <iostream>  
#include <string>  

using namespace std;

int main() 
{
 cout << "Hello, my name is VS Code!" << endl;
 cout << "What would you like me to do?" << endl;

 string user_input; 
 cin >> user_input;
 getline(cin, user_input);

 cout << "I am sorry, I cannot do that." << endl; 
 return 0;
}