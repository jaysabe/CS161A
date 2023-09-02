/******************************************************************************
# Author:           Jay Abegglen
# Assignment:       Midterm
# Date:             November 5, 2022
# Description:      This program prompts 3 participants to enter their names and the number of rocks they collected, then calculates who took first, second, and third place. It additionally calculates the total average of rocks collected overall.  
#                   
# Input:            userOne, userTwo, userThree as string types, rockNum1, rockNum2, rockNum3 as integer types
# Output:           Produces avgRockCount (double) from rockNumTotal (integer), then displays placement results and average (avgRockCount) to the user.
# Sources:          Midterm 2022 instructions
#******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int NUM_PLAYERS = 3;

int main() {
//declare variables:
  string userOne = "", userTwo = "", userThree = "";
  int rockNum1 = 0, rockNum2 = 0, rockNum3 = 0, rockNumTotal = 0;
  double avgRockCount = 0.0; 

//display welcome message
  cout << "Welcome to the Rock Collecting Championship!\n" << endl;

//Prompt input for player 1 
  cout << "\nEnter player 1 name: ";
  getline(cin, userOne);

  cout << "How many rocks did " << userOne << " collect? ";
  cin >> rockNum1;

  if (rockNum1 < 0) {
    rockNum1 = 0;
    cout << "Warning. Invalid amount. 0 will be entered." << endl;
  }

  cin.ignore(100, '\n');
//Prompt input for player 2
  cout << "\nEnter player 2 name: ";
  getline(cin, userTwo);

  cout << "How many rocks did " << userTwo << " collect? ";
  cin >> rockNum2;
  
  if (rockNum2 < 0) {
    rockNum2 = 0;
    cout << "Warning. Invalid amount. 0 will be entered." << endl;
  }

  cin.ignore(100, '\n');
 //Prompt input for player 3 
  cout << "\nEnter player 3 name: ";
  getline(cin, userThree);

  cout << "How many rocks did " << userThree << " collect? ";
  cin >> rockNum3;

  if (rockNum3 < 0) {
    rockNum3 = 0;
    cout << "Warning. Invalid amount. 0 will be entered." << endl;
  }
  
  cin.ignore(100, '\n');

  cout << endl;
  
  
// Placements
  if ((rockNum1 == rockNum2) && (rockNum2 == rockNum3))  {
    cout << "It's a 3 way tie!" << endl;
  }
  if ((rockNum1 > rockNum2) && (rockNum2 > rockNum3)) {
    cout << userOne << " is in first place!" << endl;
    cout << userTwo << " is in second place!" << endl;
    cout << userThree << " is in third place!" << endl;
  }
  else if ((rockNum1 > rockNum2) && (rockNum3 > rockNum2)) {
    cout << userOne << " is in first place!" << endl;
    cout << userThree << " is in second place!" << endl;
    cout << userTwo << " is in third place!" << endl;    
  }

  else if ((rockNum2 > rockNum1) && (rockNum2 > rockNum3)) { 
    cout << userTwo << " is in first place!" << endl;
    cout << userOne << " is in second place!" << endl;
    cout << userThree << " is in third place!" << endl;    
  }

  else if ((rockNum2 > rockNum1) && (rockNum1 < rockNum3)) { 
    cout << userTwo << " is in first place!" << endl;
    cout << userThree << " is in second place!" << endl;
    cout << userOne << " is in third place!" << endl;      
  }

  else if ((rockNum3 > rockNum2) && (rockNum2 > rockNum1)) {
    cout << userThree << " is in first place!" << endl;
    cout << userTwo << " is in second place!" << endl;
    cout << userOne << " is in third place!" << endl;      
  }
  else if ((rockNum3 > rockNum2) && (rockNum2 < rockNum1)) {
    cout << userThree << " is in first place!" << endl;
    cout << userOne << " is in second place!" << endl;
    cout << userTwo << " is in third place!" << endl;
  }
//tied placement in first
  if ((rockNum1 == rockNum2) && (rockNum1 > rockNum3)) {
    cout << userOne << " and " << userTwo << " have tied for first place!" << endl;
    cout << userThree << " is in second place!" << endl;
  }
  else if ((rockNum3 == rockNum2) && (rockNum3 > rockNum1)) {
    cout << userThree << " and " << userTwo << " have tied for first place!" << endl;
    cout << userOne << " is in second place!" << endl;
  }
  else if ((rockNum1 == rockNum3) && (rockNum1 > rockNum2)) {
  cout << userOne << " and " << userThree << " have tied for first place!" << endl;
    cout << userTwo << " is in second plaec!" << endl;
  }
//tied in second place
  if ((rockNum2 == rockNum3) && (rockNum2 < rockNum1)) {
    cout << userOne << " is in first place!" << endl;
    cout << userTwo << " and " << userThree << " have tied for second place!" << endl;
  }
  else if ((rockNum1 == rockNum3) && (rockNum2 > rockNum1)) {
    cout << userTwo << " is in first place!" << endl;
    cout << userOne << " and " << userThree << " have tied for second place!" << endl;
  }
  else if ((rockNum2 == rockNum1) && (rockNum1 < rockNum3)) {
    cout << userThree << " is in first place!" << endl;
    cout << userOne << " and " << userTwo << " have tied for second place!" << endl; 
  }

//Calculations for average rock count 
  rockNumTotal = rockNum1 + rockNum2 + rockNum3;
  avgRockCount = static_cast<double>(rockNumTotal) / NUM_PLAYERS;

//set to 2 decimal places for float devision
  cout << fixed << setprecision(2) << endl;

  cout << "\nThe average number of rocks collected by the top three players is " << avgRockCount << "!\n" << endl;

  cout << "Congratulations Rock Collectors!" << endl;
  
  return 0;
  
}
