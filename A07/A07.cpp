/******************************************************************************
# Authors:          Jay Abegglen
# Lab:              assignment 07
# Date:             Nov 20, 2022
# Description:      This program is meant to simulate a coffee shop online ordering system. Users are prompted to first select types of food and drink that they would like to order, then are encouraged to add a tip after the total is calculated. The program displays the total amount after a tip is added and thanks the user.
# Input:            userMenu - integer type, goodiesChoice– char type, tipAmount – double type 
# Output:          CarteBask– double
# Sources:          Assignment 7 instructions
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//constants for menu prices
const double DONUT_COST = 4.00;
const double PASTRY_COST = 3.56;
const double CAKEPOP_COST = 2.00;
const double SANDWICH_COST = 5.65;
const double MELT_COST = 4.65;
const double LATTE_COST = 3.10;
const double TEA_COST = 1.35;
const double BEV_COST = 2.30;

int main() {
 //declare vars
  int userMenu;
  char goodiesChoice;
  double carteBask, tipAmount, totalCost;

  //welcome message and menu with prices FIX ME with fancy formating 
  cout << "Welcome to Jay's Beans!" << endl;

    //start do-while loop
  do {
      //Main Menu
    
    cout << "Please pick from the following options (1-4): \n" << endl;
    cout << "1. Donuts / Pastries / Cake Pop " << endl;
    cout << "2. Sandwiches / Melts " << endl;
    cout << "3. Latté / Tea / Beverage " << endl;
    cout << "4. Quit" << endl;
    
    cin >> userMenu;

    //validating only integer types
    while (!cin) {
      cout << "Invalid input! Please choose an option 1-4. \n" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cin >> userMenu;
    }
    //validating specific integers inside number range 1-4
    while ((userMenu < 1) || (userMenu > 4) || (!cin)) {
      cout << "Invalid input! Please choose an option 1-4. \n" << endl;
      
      cin.clear();
      cin.ignore(100, '\n');
      cin >> userMenu;
        
    }
    //set decimal by 2 places
    cout << fixed << showpoint << setprecision(2) << endl;
    if (userMenu ==1) {
      cout << "Which would you like to add to your cart?" << endl;
      cout << "D: Donuts  $4.00" << endl;
      cout << "P: Pastries  $3.56" <<endl;
      cout << "C: Cake Pop  $2.00" << endl;

      cin >> goodiesChoice;
      
        goodiesChoice = toupper(goodiesChoice);
      cout << "CHOICE: "<< goodiesChoice << endl;
          while ((!cin) || (!(goodiesChoice == 'D')) && (!(goodiesChoice == 'P')) && (!(goodiesChoice == 'C'))) { 
            cout << "Invalid input!" << endl; 
            cout << "To clarify, would you like a donut (\"D\"), pastry (\"P\"), or a cakepop (\"C\")?" << endl;
            
            cin.clear();
            cin.ignore(100, '\n');
          cin >> goodiesChoice;
            goodiesChoice = toupper(goodiesChoice);
            }
// switch statement to select which dessert to add to cart / add to total cost
      switch (goodiesChoice) {
        case 'D':
          carteBask += DONUT_COST;
          cout << "A donut was added to your carte." << endl;
          break;
        case 'P':
          carteBask += PASTRY_COST;
          cout << "A pastry was added to your carte." << endl;
          break;
        case 'C':
          carteBask += CAKEPOP_COST;
          cout << "A cake pop was added to your carte." << endl;
          break;
        }     
    cout << "Total: $" << carteBask << endl;
      
  }
    if (userMenu == 2) {
        cout << "Which would you like to add to your cart?" << endl;
        cout << "S: Sandwiches $ 5.65" << endl;
        cout << "M: Melts $4.65" <<endl;
      
        cin >> goodiesChoice;
        goodiesChoice = toupper(goodiesChoice);
            while ((!cin) || (!(goodiesChoice == 'S')) && (!(goodiesChoice == 'M'))) {
               cout << "Invalid input! Please try again." << endl;
              cout << "To clarify, would you like a sandwich (\"S\") or a melt (\"M\")?" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> goodiesChoice;
            goodiesChoice = toupper(goodiesChoice);
              }
              switch (goodiesChoice) {
         case 'S':
          carteBask += SANDWICH_COST;
          cout << "A sandwich has been added to your carte. " << endl;
          break;
          
        case 'M':
          carteBask += MELT_COST;
          cout << "A melt has been added to your carte. " << endl;
          break;
                }         
      cout << "Total: $" << carteBask << endl; 
      }
      if (userMenu == 3) {
        cout << "Which would you like to add to your cart?" << endl;
        cout << "L: Latté $4.00" << endl;
        cout << "T: Tea $4.35" <<endl;
        cout << "B: Cold Beverage $2.30" <<endl;
      
        cin >> goodiesChoice;
        cout << "Invalid input!" << endl;
          goodiesChoice = toupper(goodiesChoice);
          while ((!cin) || (!(goodiesChoice == 'L')) && (!(goodiesChoice == 'T')) && (!(goodiesChoice == 'B'))) {
            cout << "To clarify, would you like a latté (\"L\"), tea (\"T\"), or a cold beverage (\"B\")?" << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> goodiesChoice;
            goodiesChoice = toupper(goodiesChoice);
            }
       switch (goodiesChoice) {
        case 'L':
          carteBask += LATTE_COST;
          cout << "One latté has been added to your carte." << endl;
          break;
        case 'T':
          carteBask += TEA_COST;
          cout << "One tea has been added to your carte." << endl;
          break;
        case 'B':
          carteBask += BEV_COST;
          cout << "One cold beverage has been added to your carte." << endl;
          cout << "\nPlease remember to pick up your beverage can at the counter when you arrive." << endl;
          break;
        }
        cout << "Total: $" << carteBask << endl;
        }
  } while (userMenu != 4);
//total price shown to user + calc for tip amount
  if (carteBask > 0.0001) {
    cout << "Would you like to leave a tip? Here's some suggested amounts: " << endl;
  
    cout << "10% = " << carteBask *0.1 << endl;
    cout << "15% = " << carteBask *.15 << endl;
    cout << "20% = " << carteBask *.2 << endl;
    cout << "Enter tip amount: ";
    cin >> tipAmount;
      //validate tip amount
      while ((!cin) || (tipAmount < 0)) {
        cout << "Invalid input! Please try again with a valid tip amount \n" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cin >> tipAmount;
       }
    }

     
//total bill with tip included:
    carteBask += tipAmount;
    cout << "\nTotal Amount Due: $" << carteBask << endl;

    cout << "Thank you for shopping with us today!" << endl;

  
  return 0;
        
}
