/******************************************************************************
# Author:           Jay Abegglen
# Assignment:       A04
# Date:             10/20/2022
# Description:      
# 
# Input:           
#                  
# Output:           
# Sources:          Assignment 4 instructions and given formula, Zybooks Chapter 4 Assignment Sample.
#******************************************************************************/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
//Declare variables
  char vChoice;
  int vehicleNum, adultNum, seniorNum, youthNum, bikeNum, ticketSum;
  double totalFare, bonusTicket;

// Display Ferry Fare Menu
  cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;
  cout << endl;
  
  cout << "Fare Description " << setw(40) << setfill(' ') << "Ticket $" << endl;
  cout << "-----------------------------              -------------" << endl;
  cout << "Vehicle Under 14'(less than 168”) & Driver " << setfill(' ') << setw(13) << " $ 57.90" << endl;

  cout << "Adult (age 19 - 64) " << setw(36) << " $ 14.95" << endl;
  cout << "Senior (age 65 & over) / Disability " << setw(19) << " $ 7.40" << endl;
  cout << "Youth (age 6 - 18) " << setw(36) << " $ 5.55" << endl;
  cout << "Bicycle Surcharge (included with Vehicle)  " << setw(12) << " $ 4.00" << endl;
  

//prompt user for a vehicle or not + if else 
  cout << endl;
  cout << "Are you driving a vehicle onto the Ferry (Y/N): ";
  cin >> vChoice;

  if ((vChoice == 'Y') || (vChoice == 'y')) {
    vehicleNum = 1; 
  }
  else if ((vChoice == 'N') || (vChoice == 'n')) {
    vehicleNum = 0;
  }
  else {
     cout << "\ninvalid input! Please try again later!" << endl;
    cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
    return 0;
  }

// Prompting user for number of each type of ticket 
  
  cout << "How many adults? ";
  cin >> adultNum;

  if (adultNum < 0) {
    cout << "Error! Invalid answer!! Please try again later!!" << endl;
    cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
      return 0;  
    }
  cout << "How many seniors? ";
  cin >> seniorNum;

  if (seniorNum < 0) {
    cout << "Error! Invalid answer!! Please try again later!!" << endl;
    cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
      return 0;  
  }
  
  cout << "How many youths? ";
  cin >> youthNum;
  
  if (youthNum < 0) {
    cout << "Error! Invalid answer!! Please try again later!!" << endl;
    cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
      return 0;  
    }
  
  cout << "How many bikes? ";
  cin >> bikeNum;
  
  if (bikeNum < 0) {
    cout << "Error! Invalid answer!! Please try again later!!" << endl;
    cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
      return 0;  
    }
  
// // Calculations for each constant to type of ticket

  ticketSum = vehicleNum + adultNum + seniorNum + youthNum + bikeNum;

  if (ticketSum > 20) {
    cout << "\n Uh oh! Too many people in your group. Split into 2 groups and try again!" << endl;
    cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
    return 0;
  }
  
  //Declaring monitary values for each type of ticket after data is collected

  cout << fixed << setprecision(2) << endl;


  totalFare = (vehicleNum * 57.90) + (adultNum * 14.95) + (seniorNum * 7.40) + (youthNum * 5.55) + (bikeNum * 4.00);

  
  cout << "\nYour total cost today is $ " << totalFare << endl;


// Calculations for bonus ticket milestone   

  if (totalFare >= 100) {
    cout << "\nCONGRADULATIONS! You are eligible for a free adult ticket for the next trip!" << endl;
  }
  else {
    bonusTicket = 100 - totalFare;
    cout << "\nIf you spend $ " << bonusTicket << " more, you are eligible for a free adult ticket for your next trip." << endl;
    }
  
  cout << "\n Thank you for using Washington State Ferries Fare Calculator!";
  
    return 0;
  
}
