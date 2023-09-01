#include <iostream>
#include <string>
using namespace std;

int main() {
//defining string variables and index var
  string emailAddress = "";
  string userName = "";
  string domainName = "";
  
//define index variable
  int atSymbolIndex = 0;

//Welcome message
  cout << "Welcome to the Email Address Domain Namer Program!\n" << endl;

//prompt user to input a valid email address
  cout << "Enter an email address: ";
  cin >> emailAddress;

  cout << "\nYou have entered: " << emailAddress << endl;
  
//Declare '@' symbol index & Validate the inputs
  atSymbolIndex = emailAddress.find('@');
  if (atSymbolIndex == string::npos) {
    cout << "your email is missing an '@' symbol! Please try again with a valid email address!!" << endl;
    
    }
//Defining UserName and Domain names based on input
  else {
    userName = emailAddress.substr(0, atSymbolIndex);
    cout << "Username: " << userName << endl;
    
    domainName = emailAddress.substr(atSymbolIndex+1);
    cout << "Domain name: " << domainName << endl;
    }
  cout << "\nThank you for using our program!" << endl;
return 0;
  } 


