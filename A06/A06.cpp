/******************************************************************************
# Author:           Jay Abegglen
# Lab:              assignment 06
# Date:             November 12, 2022
# Description:      The program estimates a total count of jelly beans in a given jar. The length of a jelly bean (cm), its height (cm), and a jar size. Then will print a total estimation of jelly beans. Finally, it will inform the user of the largest bean size overall, its largest jar size winner, an average bean count, and the number of entries the user made.
# Input:            jellyLength - double, jellyHeight - double, jarSize - int, and DoAgain - char.      
# Output:      jellBeanVol, avgNumBeans, and lagestBean as double. totalBeans, sumBeans, entry and jarWin as integers.     
# Sources:          Assignment 6 instructions, Assignment 2 Instructions
#******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
//declare a02 vars
  const double LOAD_FACTOR = 0.698;
  const double PI = M_PI;
  double jellyLength = 0.0, jellyHeight = 0.0, jellyBeanVol = 0.0;
  int jarSize = 0; 
  
//declare new vars
  double totalBeans = 0.0, sumBeans = 0.0, largestBean = 0.0, avgNumBeans = 0.0;
  int jarWin = 0, entry = 0; 
  char doAgain = ' ';

// Welcome message 
  cout << "Welcome to my ULTIMATE Jelly Bean Guesser Program!" << endl;

//do loop for taking jellybean dimensions + entry iterations counter
  do {
  
    ++entry;
    
    cout << "\nEnter the length of a jelly bean (cm) and the height of a jelly bean (cm) separated by a space: ";
    cin >> jellyLength >> jellyHeight;
    cout << "Enter jar size (ml): ";
    cin >> jarSize;

    //a02 calculations for total est beans
    
  jellyBeanVol = (5.0 * PI * jellyLength * (jellyHeight * jellyHeight)) / 24.0;

  //if-else statements for largest bean size and jar size winner
    if (jellyBeanVol > largestBean) {
      largestBean = jellyBeanVol;
    }
    //a06 calculations sumBean counts per iteration --> for average calculations at the end
    sumBeans += totalBeans;
    totalBeans = (jarSize * LOAD_FACTOR) / jellyBeanVol;

  //Jar size winner 
    if (totalBeans > jarWin) {
      jarWin = jarSize;
    }

  cout << "Estimate of jelly beans in jar is: " << totalBeans << endl;
//sets to 2 decimal places for next iterations
    cout << fixed << setprecision(2);
    cout << "\nDo you want to enter more (y/n): ";
    cin >> doAgain;

    } while (doAgain == 'y');

  //final outputs 
  cout << "\nNumber of Entries: " << entry << endl;
  cout << "Average number of Jelly Beans " << sumBeans / entry << endl;
  cout << "Largest jelly bean: " << largestBean << "cm^3" <<endl;
  cout << "Jar size for largest jelly bean estimate: " << jarWin << " ml" << endl;
  cout << "\nThank you for using my program!" << endl;
    
  
  return 0;
  
}
