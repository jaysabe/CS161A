# CS 161A: Programming and Problem Solving I - Assignment A07

## Description
Program was created to take in the user’s adjusted gross income, prompt them to enter their marital status, and then based on their inputs, calculate their annual taxes for them. 

## Sample Run

```
Welcome to my Tax Calculator!
Please enter the following information and I will calculate your Income Tax for you!

Enter your Adjusted Gross Income: 10000
Enter your filing status (0= dependent, 1= single, and 2= married): 1
Enter your taxes withheld $: 400

Tax Summary:
        AGI: 10000
        Deduction: 12000
        Taxable Income: 0
        Federal Tax: 0
        Tax Due: -400
        
Thank you for using my Income Tax Calculator!
______________________________________________________________________________________
Welcome to my Tax Calculator!
Please enter the following information and I will calculate your Income Tax for you!

Enter your Adjusted Gross Income: 85000
Enter your filing status (0= dependent, 1= single, and 2= married): 2
Enter your taxes withheld $: 560

Tax Summary:
          AGI: 85000
         Deduction: 24000
        Taxable Income: 61000
        Federal Tax: 6920
       Tax due: 6360
        
Thank you for using my Income Tax Calculator!

______________________________________________________________________________________
Welcome to my Tax Calculator!
Please enter the following information and I will calculate your Income Tax for you!

Enter your Adjusted Gross Income: -100
Invaild! Please try again!
Enter your Adjusted Gross Income: 45000
Enter your filing status (0= dependent, 1= single, and 2= married): 0
Enter your taxes withheld $: 0

Tax Summary:
          AGI: 45000
         Deduction: 6000
        Taxable Income: 39000
        Federal Tax: 6364
        Tax due: 6364
Thank you for using my Income Tax Calculator!
```

## Inputs

adjustedGrossIncome, status, and taxWithheld as integer types

## Outputs
deduction as integer type
taxable, taxAmt, taxDue, and tempVar as double types
## Calculations
getTaxable () : taxable = adjustedGrossIncome - deduction
calcTax () : Calculates federal tax depending on marital status and income tax bracket.
calcTaxDue() : taxDue = taxAmt - taxWithheld

## Pseudocode

```
FUNCTION: welcome message
Welcome to my Tax Calculator! Please enter the following information and I will calculate your Income Tax for you!
END FUNCTION welcome()
```
FUNCTION: notValidateInt 
Return adjustedGrossIncome < 0 
FUNCTION END notValidateInt ()
```
FUNCTION: getDeduction
PASS through variable int status 
DECLARE local var deduction as an integer
    Select (status):
        Case 0:
          deduction = 6000
        Case 1:
          deduction = 12000
        Case 2:
          deduction = 24000
        default:
          deduction = 6000
RETURN deduction
FUNCTION END GetDeduction()
```
FUNCTION: getTaxable
DECLARE taxable as double type
SET Taxable = adjustedGrossIncome - deduction
If (taxable < 0) THEN
    Taxable = 0
RETURN taxable
FUNCTION END getTaxable()
```
FUNCTION calcTax 
PASS status as int and taxable as double
DECLARE taxAmt and tempVar as double
IF status == 0 or 1 THEN
If NOT taxable < 0 AND taxable <= 10000 THEN
    SET taxAmt = round (taxable *0.1)
ELSE IF taxable >= 10001 AND taxable <= 40000 THEN 
    SET tempVar = taxable - 10000
    SET taxAmt = round (1000 + (tempVar * 0.12))
ELSE IF taxable >= 40001 AND taxable <= 85000 THEN
    SET tempVar = taxable - 40000
    SET taxAmt = round (4600 + (tempVar * 0.22))
ELSE 
    SET tempVar = taxable - 85000
    SET taxAmt = round (14500 + (tempVar * 0.24))
ELSE IF status == 2
    If NOT taxable <= 0 AND taxable <= 20000 THEN 
        SET taxAmt = round(taxable * 0.1)
    ELSE IF taxable >= 20001 AND taxable <= 80000 THEN
        SET tempVar = tempVar - 20000
        SET taxAmt = round (2000 + (tempVar * 0.12))
    ELSE
        SET tempVar = taxable - 80000
        SET taxAmt = round (9200 + (tempVar * 0.22))
RETURN type cast int (taxAmt)
FUNCTION END calcTax
```
FUNCTION: calcTaxDue 
DECLARE taxDue as double 
SET taxDue = taxAmt - taxWithheld
RETURN taxDue
FUNCTION END calcTaxDue
```
FUNCTION: main
DECLARE adjustedGrossIncome, status, deduction, and taxWithheld as integer variables
CALL welcome() function
DISPLAY prompt - Enter your Adjusted Gross Income $: 
INPUT adjustedGrossIncome
WHILE notValidateInt () THEN
    DISPLAY - Invalid! Please try again!
    INPUT adjustedGrossIncome
    DISPLAY - Enter your filing status (0= dependent, 1= single, and 2= married):
    INPUT status
WHILE (not type or integer outside of 0-2) THEN
    Clear cin
    Ignore cin for 100, \n
    Loop until user gives valid input
SET deduction = getDeduction() function 
DISPLAY prompt -   Enter your taxes withheld $:
INPUT taxWithheld

DISPLAY - Tax Summary: 
DISPLAY - AGI: {adjustedGrossIncome}
DISPLAY - Taxable income: {getTaxable()}
DISPLAY - Federal tax: {calcTax()}
DISPLAY - Tax due: {calcTaxDue()}
DISPLAY - Thank you for using my Income Tax Calculator!
FUNCTION END: main() 
```

## Flowchart:
![A08 Flowchart](./flowchart.png)
