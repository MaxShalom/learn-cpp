#include <iostream>  
#include <string>  

using namespace std;

int main() 
{
 cout << "Hello, my name is VS Code!" << endl;
 cout << "What is your name?" << endl;

 string user_name; 
 cin >> user_name;
 getline(cin, user_name);
 string statement = "Hello" + user_name + ", Nice to meet you!";

 cout << statement; 
 return 0;
}