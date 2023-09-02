/******************************************************************************
# Author:           Jay Abegglen
# Assignment:       Final Exam 
# Date:             December 10, 2022
#
Description:        This program helps the user set a goal for miles tracked per day in a week for their exercising goals, then displays whether they have met, exceeded, or missed their goals and by how much. 
# Input:           integers: goal, num 
# Output:          integers: totalDiff, i, sum
# Sources:         Final Exam Instructions
#******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
void getInput(int &goal);
int calcTotal();


int main() {
  //declare varaibles
  int goal, num, totalDiff;

  getInput(goal);
  
  if (goal > 0) {
    num = calcTotal(); 
  
  //total miles collected for the week
  cout << "\nYou rode " << num << " miles this week." << endl;
    
  //Set total difference for goal met, under or over

  if (num < goal) {
    totalDiff = goal - num;
    cout << "Uh oh! You missed your goal by " << totalDiff << " miles!" << endl;
  }
  else if (num > goal) {
    totalDiff = num - goal;
    cout << "Great job! You have exceeded your goal by " << totalDiff << " miles." << endl;
  }
  else if ((num !=0) && (num == goal)) {
    cout << "Great job meeting your goal! " << endl;
  }
    }
  //skips program to end if user inputs 0 or less than 0 for miles tracked
  else if (goal <= 0) {
    goal = 0;
    cout << "\nno miles were tracked this week." << endl;
    }
  //goodbye message
  cout << "\nKeep Riding! " << endl;
}

void getInput(int &goal) {
  
  cout << "How many miles do you want to ride this week? ";
  cin >> goal;
  
}

int calcTotal() {
  int num, sum;

  for (int i=0; i < 7; i++) {
    
    cout << "How many miles did you ride on ";
      if (i == 0) {
        cout << "Sunday? ";
        cin >> num;
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? ";
          cin >> num;
      }
    
        }
        else if (i == 1) {
        cout << "Monday? ";
          cin >> num;
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? ";
      }
    
          }
        else if (i == 2) {
        cout << "Tuesday? ";
          cin >> num;
           while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? ";
      }
    
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? "; 
      }
    
          }
        else if (i == 3) {
        cout << "Wednesday? ";
          cin >> num;
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? "; 
      }
    
          }
        else if (i == 4) {
        cout << "Thursday? ";
          cin >> num;
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? "; 
      }
    
          }
        else if (i== 5) {
        cout << "Friday? ";
          cin >> num;
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? ";
      }
    
          }
        else if (i == 6) {
        cout << "Saturday? ";
          cin >> num;
    while ((!cin) || (num < 0)) {
      cin.clear();
          cin.ignore (100, '\n');
          cout << "Miles must be 0 or greater! " << endl; 
          cout << "How many miles did you ride on Sunday? "; 
      }
          }
      
    //used for sum of miles per week
    sum += num;
  
  }
  
  return sum;
  }
