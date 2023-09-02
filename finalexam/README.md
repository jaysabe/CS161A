# CS161A: Programming and Problem Solving I - Final Exam

## Description
This program helps the user set a goal for miles tracked per day in a week for their exercising goals, then displays whether they have met, exceeded, or missed their goals and by how much. 

## Sample Run
```
Welcome to my Miles Tracker program.

How many miles do you want to ride this week? 60

How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -1
Miles must be 0 or greater!
How many miles did you ride on Sunday? 10 
How many miles did you ride on Monday? 0
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10

You rode 60 miles this week.
Good job meeting your goal! 

Keep riding!
_____________________________________________________
How many miles do you want to ride this week?  50

How many miles did you ride on Sunday? 15
How many miles did you ride on Monday? 15
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 5
How many miles did you ride on Friday? 5
How many miles did you ride on Saturday? 10

You rode 70 miles this week.
Great job! You have exceeded your goal by 20 miles!

_____________________________________________________
How many miles do you want to ride this week?  80

How many miles did you ride on Sunday? 15
How many miles did you ride on Monday? 15
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 5
How many miles did you ride on Friday? 5
How many miles did you ride on Saturday? 10

You rode 70 miles this week.
Uh oh! You missed your goal by 10 miles!

Keep riding!

_____________________________________________________
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!

_____________________________________________________
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!
```

## Inputs
Integers: goal, num

## Outputs
Integers: totalDiff, i, sum

## Calculations
1. In calcTotal () : sum += num to each loop iteration
2. i ++ to count for each weekday change
3. totalDiff = goal - num or num - goal for exceeding or underachieving goal metric

## PSEUDOCODE:
```
FUNCTION getInput() 
Reference var as int goal
DISPLAY Prompt - How many miles do you want to ride this week?
FUNCTION END getInput (&goal)
```
FUNCTION Int calcTotal()
DECLARE ints: num
FOR i= 0 ; i < 7; ++i 
DISPLAY - How many miles did you ride on 
IF  i == 0 THEN 
DISPLAY - Sunday?
INPUT num
Validate input
IF i == 1 THEN
  DISPLAY - Monday?
INPUT num
Validate input
IF i == 2 THEN
  DISPLAY - Tuesday?
INPUT num
Validate input
IF i == 3 THEN
  DISPLAY - Wednesday?
INPUT num
Validate input
IF i == 4 THEN
  DISPLAY - Thursday?
INPUT num
Validate input
IF i == 5 THEN
  DISPLAY - Friday?
INPUT num
Validate input
IF i == 6 THEN
  DISPLAY - Saturday? 
INPUT num
Validate input
sum+=num
Return num
FUNCTION END calcTotal ()
```
FUNCTION main ()
DECLARE as integers: goal, num, totalDiff
CALL getInput (&goal)
Validate with WHILE loop
IF goal <= 0 THEN
  SET goal = 0 miles
  DISPLAY - no miles were tracked this week.
ELSE 
  CALL calcTotal()
  DISPLAY - You rode {num} miles this week.
  SET totalDiff = goal - num
  IF (num < goal)
    DISPLAY - uh oh! You missed your goal by { } miles!
  ELSE IF (num > goal) 
    DISPLAY - Great job! You have exceeded your goal by { } miles!
  ELSE IF (num == goal)
    DISPLAY - Great job meeting your goal!
    DISPLAY - Keep Riding!
```
