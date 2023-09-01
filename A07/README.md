# CS 161A: Programming and Problem Solving I - Assignment A07

## Description
This program is an online ordering system for a coffee shop. It will continuously print a menu of options for the user to choose from and when they are done it will prompt for a tip amount and print the total pay amount.

## Sample Run

```
Welcome to Bean Dreams Coffee Shop!

Please choose an option:
-----------------------
1. Coffee
2. Tea
3. Food
4. Exit

Please enter the number of your selection:
> 3

What kind of food would you like?
1. Muffin
2. Bagel with Cream Cheese
3. Omelette

Please enter the number of your selection:
> 2

Bagel with cream cheese added.

Subtotal: $2.99

Please choose an option:
-----------------------
1. Coffee
2. Tea
3. Food
4. Exit

Please enter the number of your selection:
> 1

What kind of coffee would you like?
1. Americano
2. Cappuccino
3. Mocha

Please enter the number of your selection:
> 3

Mocha added.

Subtotal: $7.24

Please choose an option:
-----------------------
1. Coffee
2. Tea
3. Food
4. Exit

Please enter the number of your selection:
> 4


Subtotal: $7.24

Please add a tip. Suggested tip amounts:
15% = $1.09
20% = $1.45
25% = $1.81

Please enter tip amount:
> $1.81

Subtotal     $7.24
Tip          $1.81
--------------------
Grand Total  $9.05

Thanks for your patronage!
```

```
Welcome to Bean Dreams Coffee Shop!

Please choose an option:
-----------------------
1. Coffee
2. Tea
3. Food
4. Exit

Please enter the number of your selection:
> 9

Invalid selection! Please try again!
> 2

What kind of tea would you like?
1. Green Tea
2. Oolong
3. Spiced Chai

Please enter the number of your selection:
> a

Invalid selection! Please try again!
> 3

Spiced chai added.

Subtotal: $2.33

Please choose an option:
-----------------------
1. Coffee
2. Tea
3. Food
4. Exit

Please enter the number of your selection:
> 4


Subtotal: $2.33

Please add a tip. Suggested tip amounts:
15% = $0.35
20% = $0.47
25% = $0.58

Please enter tip amount:
> $1

Subtotal     $2.33
Tip          $1.00
--------------------
Grand Total  $3.33

Thanks for your patronage!
```


## Inputs

`choice` as char
`subChoice` as char
`tipAmount` as double

## Outputs

`subTotal` as double
`tipAmount` as double
`orderTotal` as double

## Calculations
- Addition to add each subsequent order item to `subTotal` and to calculate the `orderTotal` as the sum of `subTotal` and `tipAmount`
- `subTotal` multiplied by various tip rates to show suggested tip amounts

## Pseudocode

```
1. DISPLAY Welcome message
2. DECLARE userMenu as an integer type, goodiesChoice as a char type, arteBask, tipAmount as double type variables.
3. SET constant double variables: DONUT_COST = 4.00, PASTRY_COST = 3.56, CAKEPOP_COST = 2.00, SANDWICH_COST = 5.65, MELT_COST = 4.65, LATTE_COST = 3.10, TEA_COST = 1.35, BEV_COST = 2.30.
4. DO 
          DISPLAY prompt : Please pick from the following options
Donuts / Pastries / Cake Pop 
Sandwiches / Melts
Latte / Tea / Cold Beverage
Quit
       1. INPUT userMenu
       2. Validate with if -else options 
          a.) IF userMenu == 1 THEN
DISPLAY - Would you like: 
                       D: Donuts  $4.00
                       P: Pastries  $3.56
                       C: Cake Pop  $2.00
INPUT goodiesChoice
SELECT goodiesChoice:
Case D:
carteBask += DONUT_COST
break
Case P:
carteBask += PASTRY_COST
break
Case C:
carteBask += CAKEPOP_COST
break
Case default:
“Invalid input”
NESTED WHILE not type integer THEN
DISPLAY - To clarify, would you like a donut ("D"), pastry ("P"), or a cakepop ("C")?
IF goodiesChoice is D or d THEN
carteBask += DONUT_COST
ELSE IF goodiesChoice is P or p THEN 
 carteBask += PASTRY_COST
ELSE IF goodiesChoice is C or c THEN
carteBask += CAKEPOP_COST
END NESTED WHILE
DISPLAY - Your total is: 

         b.) IF userMenu == 2 THEN
 DISPLAY - Would you like 
                       S: Sandwiches $ 5.65
                       M: Melts $4.65
INPUT goodiesChoice
SELECT goodiesChoice:
              Case S:
              carteBask +=  SANDWICH_COST 
              break
              Case M:
              carteBask +=  MELT_COST
              break
             Case default:
             “Invalid Input”
 NESTED WHILE not type integer THEN
DISPLAY - To clarify, would you like a sandwich ("S"), or a melt ("C")?
IF goodiesChoice is D or d THEN
carteBask += DONUT_COST
ELSE IF goodiesChoice is P or p THEN 
 carteBask += PASTRY_COST
ELSE IF goodiesChoice is C or c THEN
carteBask += CAKEPOP_COST
END NESTED WHILE
DISPLAY - Your total is: 

           c.) IF userMenu == 3 THEN  
DISPLAY - Would you like 
                       L: Latte $4.00
                       T: Tea $4.35
                       B: Cold Beverage $2.30
 INPUT goodiesChoice
 SELECT goodiesChoice
              Case L:
              catreBask += LATTE_COST
              break
              Case T:
              catreBask += TEA_COST
              break
              Case B:
              catreBask += BEV_COST
              break
             Case default:
             Invalid Message
            NESTED WHILE not type integer THEN
DISPLAY - To clarify, would you like a Latte ("L"), Tea (“T”), or a cold beverage ("B")?
IF goodiesChoice is L or l THEN
carteBask += LATTE_COST
ELSE IF goodiesChoice is Tor t THEN 
 carteBask += TASTE_COST
ELSE IF goodiesChoice is B or b THEN
carteBask += BEV_COST
END NESTED WHILE
DISPLAY - Your total is: 
   } WHILE userMenu != 4 

9. IF carteBask > 0.0001 THEN
DISPLAY - Would you like to leave a tip? Suggested amounts:
DISPLAY - 10% = {carteBask *0.1} 
DISPLAY - 15% = {carteBask *0.15}
DISPLAY - 20% = {carteBask *0.2}
DISPLAY - Enter tip amount: 
END IF
10. SET CarteBask += tipAmount
11. DISPLAY - Total Amount Due:
12. DISPLAY - goodbye message 

```

## Flowchart:
![A07 flowchart](./flowchart.png)
