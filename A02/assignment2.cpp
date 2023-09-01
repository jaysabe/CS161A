/******************************************************************************
# Author:           Jay Abegglen
# Assignment:       A02
# Date:             10/08/2022
# Description:      The program estimates a total count of jelly beans in a given jar. By using 3 user inputs: the length of a jelly bean (cm), its height (cm), and a jar size; the program will print a total count of jelly beans.
# 
# Input:           double length_jb, double height_jb, int jar_size, int jelly_volume
#                  int total_beans,
#
# Output:           Estimated total amount of jellybeans in the jar.
# Sources:          Assignment 2 instructions and given formula.
#******************************************************************************/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
const double PI = M_PI;
using namespace std;


int main() {
// declare values:
const double LOAD_FACTOR = 0.689;
double length_jb;
double height_jb;
int jar_size;
double jelly_volume;
int total_beans;

// Welcome message to user + inputs
  
cout << "WELCOME TO THE ULTIMATE JELLY BEAN COUNTER!!" << endl;

cout << "Enter length of a jelly bean (cm): ";
cin >> length_jb;

cout << "Enter height of a jelly bean (cm) : ";
cin >> height_jb;

cout << "Enter size of the jar (ml): ";
cin >> jar_size;


// Calculations and total estimate output
jelly_volume = (5 * M_PI * length_jb * (height_jb * height_jb))/24;

total_beans = (jar_size * LOAD_FACTOR) / jelly_volume;

cout << "ESTIMATED NUMBER OF JELLY BEANS IN YOUR JAR : " << total_beans << endl;
  
return 0;
  
}
