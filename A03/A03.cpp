/******************************************************************************
# Author:           Jay Abegglen
# Assignment:       A03
# Date:             October 14, 2022
# Description:      Prompts the user to input the amt of cookies eaten, calculates number of servings & sugar consumed, then displays those values back to the user.
#                   
# Input:            numCookie -- integer
# Output:           Produces numServings (double) and sugarConsumed (integer) back to user.
# Sources:          Assignment 3 instructions
#******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//constant variables declared outside main();

const int SERVING_SIZE = 5;
const int SUGAR_CONTENT = 14;

int main() {
  int numCookie;
  int sugarConsumed;
  double numServings;

  cout << "Welcome to the Serving Size & Sugar Counter! Sponsored by Oreo Cookies! \n" << endl;

// Input value
  cout << "Enter the number of oreos eaten: ";
  cin >> numCookie;

  cout << "" << endl;

// Calculations here.
  numServings = static_cast<double>(numCookie) / SERVING_SIZE;
  sugarConsumed = numCookie * SUGAR_CONTENT;

//set fixed percision to 1 place pass decimal
  cout << fixed << setprecision(1);
  
// DISPLAY numCookies oreos equals numServings servings
  cout << numCookie << " Oreos equals " << numServings << " servings! " << endl;
  cout << "You've consumed " << sugarConsumed << " gms of sugar. \n" << endl;
  cout << "Keep Eating Oreos!" << endl;
    
  return 0;
  
}
