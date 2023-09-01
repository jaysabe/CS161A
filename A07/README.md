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
1. DECLARE const double 
    PRICE_AMERICANO = 2.25
    PRICE_CAPPUCCINO = 3.25
    PRICE_MOCHA = 4.25

    PRICE_GREEN_TEA = 1.33
    PRICE_OOLONG = 1.66
    PRICE_SPICED_CHAI = 2.33

    PRICE_MUFFIN = 1.99
    PRICE_BAGEL = 2.99
    PRICE_OMELETTE = 6.99

2. DECLARE const char 
    COFFEE = '1'
    TEA = '2'
    FOOD = '3'
    EXIT = '4'

    AMERICANO = '1'
    CAPPUCCINO = '2'
    MOCHA = '3'

    GREEN_TEA = '1'
    OOLONG = '2'
    SPICED_CHAI = '3'

    MUFFIN = '1'
    BAGEL = '2'
    OMELETTE = '3'

3. DECLARE double subTotal = 0.0
4. DECLARE double orderTotal = 0.0
5. DECLARE double tipAmount = 0.0

6. DECLARE char choice = ' '
7. DECLARE char subChoice = ' '

8. SET precision to 2 decimals, fixed

9. DISPLAY welcome message

10. DO
    a. DISPLAY Please choose an option:
    b. DISPLAY 1. Coffee
    c. DISPLAY 2. Tea
    d. DISPLAY 3. Food
    e. DISPLAY 4. Exit

    f. DISPLAY Please enter the number of your selection:
    g. INPUT choice 

    h. WHILE choice < '1' OR choice > '4'
        DISPLAY Invalid selection! Please try again!
        INPUT choice
    i. ENDWHILE
      
    j. SELECT choice
        1. CASE COFFEE:
            a. DISPLAY What kind of coffee would you like?
            b. DISPLAY 1. Americano
            c. DISPLAY 2. Cappuccino
            d. DISPLAY 3. Mocha

            e. DISPLAY Please enter the number of your selection:
            f. INPUT subChoice

            g. WHILE subChoice < '1' OR subChoice > '3'
                1. DISPLAY Invalid selection! Please try again!
                2. INPUT subChoice
            h. ENDWHILE

            i. SELECT subChoice
                1. CASE AMERICANO:
                    a. DISPLAY Americano added.
                    b. SET subTotal += PRICE_AMERICANO
            
                2. CASE CAPPUCCINO:
                    a. DISPLAY Cappuccino added.
                    b. SET subTotal += PRICE_CAPPUCCINO
            
                3. CASE MOCHA:
                    a. DISPLAY Mocha added.
                    b. SET subTotal += PRICE_MOCHA

                4. DEFAULT
                    (nothing)
            j. ENDSELECT

        2. CASE TEA:
            a. DISPLAY What kind of tea would you like?
            b. DISPLAY 1. Green Tea
            c. DISPLAY 2. Oolong
            d. DISPLAY 3. Spiced Chai

            e. DISPLAY Please enter the number of your selection:
            f. INPUT subChoice

            g. WHILE subChoice < '1' OR subChoice > '3'
                1. DISPLAY Invalid selection! Please try again!
                2. INPUT subChoice
            h. ENDWHILE

            j. SELECT subChoice
                1. CASE GREEN_TEA:
                    a. DISPLAY Green tea added.
                    b. SET subTotal += PRICE_GREEN_TEA
            
                2. CASE OOLONG:
                    a. DISPLAY Oolong added.
                    b. SET subTotal += PRICE_OOLONG
            
                3. CASE SPICED_CHAI:
                    a. DISPLAY Spiced chai added.
                    b.SET subTotal += PRICE_SPICED_CHAI

                4. DEFAULT
                    a. (nothing)
            k. END SELECT
            
        3. CASE FOOD:
            a. DISPLAY What kind of food would you like?
            b. DISPLAY 1. Muffin
            c. DISPLAY 2. Bagel with Cream Cheese
            d. DISPLAY 3. Omelette

            e. DISPLAY Please enter the number of your selection:
            f. INPUT subChoice

            g. WHILE subChoice < '1' OR subChoice > '3'
                1. DISPLAY Invalid selection! Please try again!
                2. INPUT subChoice
            h. ENDWHILE

            j. SELECT subChoice:
                1. CASE MUFFIN:
                    a. DISPLAY Muffin added.
                    b. SET subTotal += PRICE_MUFFIN
                    
                2. CASE BAGEL:
                    a. DISPLAY Bagel with cream cheese added.
                    b. SET subTotal += PRICE_BAGEL
                    
                3. CASE OMELETTE:
                    a. DISPLAY Omelette added.
                    b. SET subTotal += PRICE_OMELETTE

                4. DEFAULT
                    a. (nothing)
            k. ENDSELECT
                
        4. DEFAULT:
            a. (nothing)

    k. ENDSELECT

    l. DISPLAY Subtotal: ${subTotal}

11. WHILE choice != EXIT
    
    a. DISPLAY Please add a tip. Suggested tip amounts:
    b. DISPLAY 15% = $ {subTotal * 0.15}
    c. DISPLAY 20% = $ {subTotal * 0.20}
    d. DISPLAY 25% = $ {subTotal * 0.25}

    e. DISPLAY Please enter tip amount:
    f. INPUT tipAmount

    g. SET orderTotal = subTotal + tipAmount

    h. DISPLAY Subtotal ${subTotal}
    i. DISPLAY Tip ${tipAmount}
    j. DISPLAY Grand Total ${orderTotal}

    k. DISPLAY Thanks for your patronage!
    
12. END
```

## Flowchart:
![A07 flowchart](./flowchart.png)
