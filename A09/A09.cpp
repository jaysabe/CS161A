/******************************************************************************
# Authors:          Jay Abegglen
# Lab:              assignment 09
# Date:             December 4, 2022
# Description:      Program was created to take in the user’s adjusted gross income, prompt them to enter their marital status, and then based on their inputs, calculate their annual taxes for them. 
# Input:            adjustedGrossIncome, status, and taxWithheld as int types 
# Output:           taxable, taxAmt, tempVar as double types
# Sources:          Assignment 8 and 9 instructions
#******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototypes
void welcome();
void getInput(int& adjustedGrossIncome, int& status, int& taxWithheld);
bool notValidateInt(int adjustedGrossIncome);
void getDeduction(int status, int& deduction);
void getTaxable(int adjustedGrossIncome, int deduction, int& taxable);
void calcTaxDue(int status, int taxable, int taxWithheld, double& taxAmt, double& taxDue);

//main function
int main() {
//declare variables for input
  int adjustedGrossIncome = 0;
  int status = 0;
  int deduction = 0;
  int taxWithheld = 0;
  int taxable = 0;
  double taxAmt;
  double taxDue;

  
  welcome();
  getInput(adjustedGrossIncome, status, taxWithheld);
  getDeduction(status, deduction);
  getTaxable(adjustedGrossIncome, deduction, taxable);
  calcTaxDue(status, taxable, taxWithheld, taxAmt, taxDue);
  //display Tax Summary
    cout << "Tax Summary: \n" << endl;
    cout << "\t\t AGI: $" << adjustedGrossIncome << endl;
    cout << "\t\t Deduction: $" << deduction << endl;
    cout << "\t\t Taxable income: $" << taxable << endl; 
    cout << "\t\t Federal tax: $" << taxAmt << endl;
    cout << "\t\t Tax due: $" << taxDue << endl;
    cout << "\nThank you for using my Income Tax Calculator!" << endl;
  return 0;
}
  
//Name: welcome()
//Desc: This function displays the welcome message
//input: None
//output: None
//return: None
void welcome() {
  cout << "Welcome to my Income Tax Calculator!" << endl;
  cout << "Please enter the following information and I will calculate your Income Tax for you! \n" << endl;
}

void getInput(int& adjustedGrossIncome, int& status, int& taxWithheld) {
   cout << "Enter your Adjusted Gross Income $: " << endl;
  cin >> adjustedGrossIncome;

  while ((notValidateInt(adjustedGrossIncome) || (!cin))) {
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Invaild! Please try again! \nEnter your Adjusted Gross Income $: ";
    cin >> adjustedGrossIncome;
  }
  //Prompt for deduction status
  cout << "Enter your filing status (0= dependent, 1= single, and 2= married): " << endl;
  cin >> status;  
  while((!cin) || (status < 0)){
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Invalid filing status. \nPlease enter your filing status (0= dependent, 1= single, and 2= married): " << endl;
    status = 0;
    }
  
  //Prompt for withheld tax amt / validate 
    cout << "Enter your taxes withheld $: " << endl;
    cin >> taxWithheld;
    while ((!cin) || (taxWithheld < 0)) {
    cout << "Invalid input! Try again!\nEnter your taxes withheld $: " << endl;
    cin.clear();
    cin.ignore(100, '\n');
    cin >> taxWithheld;
  }

}
//Name: notValidateInt()
//Desc: This function reads the adjustedGrossIncome and returns it
//input: None
//output: None
//return: int adjustedGrossIncome
bool notValidateInt (int adjustedGrossIncome) {
  return adjustedGrossIncome < 0;
}
//Name: getDeduction (int status)
//Desc: This function takes the status. Then it sets the deduction value based on the the maritial status (0,1, or 2). 
//input: int status, ref int deduction
//output: None
//return: None
void getDeduction(int status, int &deduction) {
    switch(status) {
    case 0:
    deduction = 6000;
    break;
    case 1: 
    deduction = 12000;
    break;
    case 2:
    deduction = 24000;
    break;
    default:
    deduction = 6000;
      }
}

//Name: getTaxable (int adjustedGrossIncome, int deduction)
//Desc: This function takes the adjustedGrossIncome and deduction. Then it declares a local var double taxable and sets the taxable value to adjustedGrossIncome - deduction. Then if taxable value is less than zero, function assigns taxable to 0. 
//input: int adjustedGrossIncome, deduction, and int ref taxable
//output: None
//return: None
void getTaxable(int adjustedGrossIncome, int deduction, int& taxable) {
  taxable = adjustedGrossIncome - deduction;

  if (taxable < 0) {
    taxable = 0;
  }
 }

//Name: calcTaxDue(double taxAmt, int taxWithheld)
//Desc: This function takes the taxAmt and taxWithheld. Then it declares a local var double taxDue and sets the taxDue value to taxAmt - taxWithheld.
//input: int status
//output: None
//return: 
void calcTaxDue(int status, int taxable, int taxWithheld, double& taxAmt, double& taxDue){
  double tempVar;

if ((status == 0) || (status == 1)) {
    if ((!(taxable <0)) && (taxable <= 10000)) {
        taxAmt = round(taxable * 0.1);
      
    }
    else if ((taxable >= 10001) && (taxable <= 40000)) {
      tempVar = taxable - 10000;
      taxAmt = round(1000 + (tempVar * 0.12));
      
    }
    else if ((taxable >= 40001) && (taxable <= 85000)){
      tempVar = taxable - 40000;
      taxAmt = round(4600 + (tempVar * 0.22)); 
      
      }
    else {
      tempVar = taxable - 85000;
      taxAmt = round(14500 + (tempVar * 0.24)); 
    }
    }  
  else if (status == 2) {
    if ((!(taxable <=0)) && (taxable <= 20000)) {
      taxAmt = round(taxable * 0.1);
      }
    else if ((taxable >= 20001) && (taxable <= 80000)) {
      tempVar = taxable - 20000;
      taxAmt = round(2000 + (tempVar * 0.12));
    }
    else {
      tempVar = taxable - 80000;
      taxAmt = round(9200 + (tempVar * 0.22));
    }
  }  
  //set taxDue = fed tax - taxwithheld
  taxDue = int(taxAmt) - taxWithheld;
}
