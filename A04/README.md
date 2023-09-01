# CS 161A: Programming and Problem Solving I - Assignment A04

## Description:

This program will present the user with a pricing menu for the Washington State Ferries service and allow the user to choose if they’re bringing a vehicle on the ferry, how many adult, senior and youth tickets they wish to purchase and how many bicycles they would like to bring. The vehicle fee includes the price of its driver and also waives the bicycle fee. The user will receive errors if they enter invalid choices and their total at the end if their information is valid. If their order total is over $100.00, they will be eligible for a free adult ticket for their next ride; otherwise, they’ll be shown how much more they would need to spend in order to qualify for the free ticket.

## Sample Run

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168”) & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): y

How many adults? 2
How many seniors? 1
How many youths? 0

Your total charge is $95.20

If you spend $4.80 more, you are eligible for a free adult ticket for the next trip.

Thank you for using the Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168”) & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 2
How many seniors? 1
How many youths? 1
How many bikes? 2

Your total charge is $50.85

If you spend $49.15 more, you are eligible for a free adult ticket for the next trip.

Thank you for using the Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168”) & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): a

Error!! Invalid answer!! Please try again later!!!

Thank you for using the Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                          Ticket $
--------------------------------------                    --------
Vehicle Under 14' (less than 168") & Driver                $57.90
Adult (age 19 - 64)                                        $14.95
Senior (age 65 and over) / Disability                      $7.40
Youth (age 6 - 18)                                         $5.55
Bicycle Surcharge (included with Vehicle)                  $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 0
How many seniors? 0
How many youths? 0

Uh oh!! Please add at least one person to your group.

Thank you for using the Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168”) & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 12
How many seniors? 4
How many youths? 5
How many bikes? 2

Uh oh!! Too many people in your group. Split into 2 groups and try again!

Thank you for using the Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168”) & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n
How many adults? -7

Error!! Invalid answer!! Please try again later!!!

Thank you for using the Washington State Ferries Fare Calculator!
```

## Inputs

### Constants

double VEHICLE_FEE = 57.90
double ADULT_TICKET_PRICE = 14.95
double SENIOR_TICKET_PRICE = 7.40
double YOUTH_TICKET_PRICE = 5.55
double BIKE_FEE = 4.00
double FREE_TICKET_MIN_ORDER = 100.00
int MAX_RIDERS = 20

### User Inputs

vehicleChoice as char
adultRiders as integer
seniorRiders as integer
youthRiders as integer
numberOfBicycles as integer

## Outputs

`orderTotal` as double (fixed precision - two digits)
“You earned a free adult ticket” (if `orderTotal> FREE_TICKET_MIN_ORDER`)
OR
“Spend an additional {`FREE_TICKET_MIN_ORDER - orderTotal`} to get a free adult ticket”

## Calculations

`orderTotal` - The sum of the number of each rider multiplied by the cost of their corresponding ticket prices and either the `VEHICLE_FEE` or the number of bicycles multiplied by the `BIKE_FEE`
The difference of `FREE_TICKET_MIN_ORDER - orderTotal` if the `orderTotal` is less than `FREE_TICKET_MIN_ORDER`

## PSEUDOCODE
1.) DISPLAY welcome message
2.) DECLARE vChoice - char
3.) DECLARE vehicleNum, adultNum, seniorNum, youthNum, bikeNum, 
4.) DECLARE totalFare and bonusTicket as double types
8.) DISPLAY Fare Description Menu
9.) DISPLAY prompt user - Are you riding a vehicle on the Ferry (Y/N): 
6.) INPUT vehicleNum (Y/N)
7.) IF vChoice == Y || vChoice == y THEN
          vehicleNum = 1
Else if vChoice == N || vChoice == n THEN
         vehicleNum = 0
Else
            “Error!! Invalid answer!! Please try again later!!!”
END IF
8.) DISPLAY prompt - How many adults?
9.) INPUT adults 
10.) IF adultNum < 0 THEN
            “Error!! Invalid answer!! Please try again later!!!”
END IF
10.) DISPLAY prompt - How many seniors?
 11.) INPUT seniors
12.) IF seniorNum < 0 THEN
            “Error!! Invalid answer!! Please try again later!!!”
END IF
13.) DISPLAY prompt - How many youths?
14.) INPUT youths 
15.) IF youthNum < 0 THEN
            “Error!! Invalid answer!! Please try again later!!!”
END IF 
16.) DISPLAY prompt - How many bikes?
17.) INPUT bikes 
18.)  IF NOT bikeNum >=0 THEN
                 “Error!! Invalid answer!! Please try again later!!!”
END IF 
19.) SET ticketSum = vehicleNum + adultNum + seniorNum + youthNum + bikeNum
20.) IF ticketSum > 20 
           Prompt user to split into 2 groups and restart program
END IF
21.) SET totalFare = (vehicleNum * 57.90) + (adultNum * 14.95) + (seniorNum * 7.40) + (youthNum * 5.55) + (bikeNum * 4.00)
22.) DISPLAY prompt - “Your total cost today is: “ totalFare
23.) IF totalFare is >= 100 THEN
            DISPLAY prompt - “CONGRATULATIONS!  you are eligible for a free adult ticket for your next trip!”         
ELSE 
        SET bonusTicket = 100 -  totalFare
        DISPLAY prompt -   If you spend bonusTicket more, you are eligible for a free adult ticket for the next trip. 
END IF
24.) DISPLAY ending message 


## Flowchart

![A04 Flowchart](./flowchart.png)
