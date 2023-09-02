# CS 161A: Programming and Problem Solving I - Midterm

 ## Description
 This program prompts 3 participants to enter their names and the number of rocks they collected, then calculates who took first, second, and third place. It additionally calculates the total average of rocks collected overall.  

 ## Sample Run
 ```
 Welcome to the Rock Collection Championships!

Enter player 1 name:  James Murphy
How many rocks did {James Murphy} collect? 54

Enter player 2 name: Several McGee
How many rocks did {Several McGee} collect? 54

Enter player 3 name: Stephan Aseph
How many rocks did {Stephan Aseph} collect? 54

It is a 3 way tie!

The average number of rocks collected by the top 3 players is 54.00 rocks!

Congratulations Rock Collectors!
____________________________________________________________________________________
Welcome to the Rock Collection Championships!

Enter player 1 name: Joe
How many rocks did {Joe} collect? 56

Enter player 2 name: Sarah H
How many rocks did {Sarah H} collect? 56

Enter player 3 name: Frankie
How many rocks did {Frankie} collect? -45
Warning, invalid amount. 0 will be entered.

Joe and Sarah H tied for first place!
Frankie is in second place!

The average number of rocks collected by the top 3 players is 37.33 rocks!

Congratulations Rock Collectors!

____________________________________________________________________________________
Welcome to the Rock Collection Championships!

Enter player 1 name:  Gordie
How many rocks did Gordie collect? 24

Enter player 2 name: Gordie Two
How many rocks did Gordie Two collect? 34

Enter player 3 name: Gordie Three
How many rocks did {Gordie Three} collect? 45

Gordie Three is in first place!
Gordie Two is in second place!
Gordie is in third place!

The average number of rocks collected by the top 3 players is 34.33 rocks!

Congratulations Rock Collectors!
```

## Inputs
userOne – string, userTwo – string, userThree – string, rockNum1 – integer, rockNum2 – integer, rockNum3 – integer

## Outputs
avgRockCount – double, rockNumTotal – string

## Calculations
SET NUM_PLAYERS = 3 as a constant integer variable
rockNumTotal = (rockNum1 + rockNum2 + rockNum3)
avgRockCount = (changed to double type for float division) rockNumTotal / NUM_PLAYERS

## PSEUDOCODE:
```
1. DISPLAY – Welcome Message 
2. SET userOne, userTwo, and userThree as string variable types.
3. SET rockNum1, rockNum2, and rockNum3 as integer variable types.
4. SET avgRockCount and rockNumTotal as double variable types.
5. SET constant integer variable NUM_PLAYERS = 3.
6. DISPLAY prompt - Enter player 1 name:
7. INPUT userOne.
8. DISPLAY prompt – What many rocks did {userOne} collect? 
9. INPUT rockNum1.
10. IF rockNum1 <0 THEN
         DISPLAY: Warning message
         SET rockNum1 = 0.
11. DISPLAY prompt - Enter player 2 name:
12. INPUT userTwo.
13. DISPLAY prompt – What many rocks did {userTwo} collect? 
14. INPUT rockNum2.
15. IF rockNum2 <0 THEN
         DISPLAY: Warning message
         SET rockNum2 = 0.
16. DISPLAY prompt - Enter player 3 name:
17. INPUT userThree.
18. DISPLAY prompt – how many rocks did {userThree} collect?
19. INPUT rockNum3.
20.  IF rockNum3 <0 THEN
         DISPLAY: Warning message
         SET rockNum3 = 0.
21. IF rockNum1 == rockNum2 && rockNum2 == rockNum3 THEN
             Display – It is a 3 way tie! 
22. IF rockNum1 > rockNum 2 && rockNum2 > rockNum3 THEN
         DISPLAY – userOne is in first place!
         DISPLAY – userTwo is in second place!
         DISPLAY – userThree is in third place!
23. IF rockNum1 > rockNum2 && rockNum3 > rockNum2 THEN
         DISPLAY – userOne is in first place!
         DISPLAY – userThree is in second place!
         DISPLAY – userTwo is in third place!
23. IF rockNum2 > rockNum1 && rockNum1 > rockNum3 THEN
         DISPLAY – userTwo is in first place!
         DISPLAY – userOne is in second place!
         DISPLAY – userThree is in third place!
24. IF rockNum2 > rockNum1 && rockNum3 > rockNum1 THEN
         DISPLAY – userTwo is in first place!
         DISPLAY – userThree is in second place!
         DISPLAY – userOne is in third place!
24. IF rockNum3 > rockNum 2 && rockNum2 > rockNum1 THEN
         DISPLAY – userThree is in first place!
         DISPLAY – userTwo is in second place!
             DISPLAY – userOne is in third place!
25. IF rockNum3 > rockNum 2 && rockNum2 < rockNum1 THEN
         DISPLAY – userThree is in first place!
         DISPLAY – userOne is in second place!
         DISPLAY – userTwo is in third place!
25. IF rockNum1 == rockNum2 && rockNum1 > rockNum3 THEN
         DISPLAY – userOne and userTwo have tied for first place!
         DISPLAY – userThree is in second place!
26. IF rockNum3 == rockNum2 && rockNum3 > rockNum1 THEN
         DISPLAY – userThree and userTwo have tied for first place!
         DISPLAY – userOne is in second place!
27. IF rockNum1 == rockNum3 && rockNum1 > rockNum2 THEN
         DISPLAY – userOne and userThree have tied for first place!
         DISPLAY – userTwo is in second place!
28. IF rockNum2 == rockNum3 && rockNum2 < rockNum1 THEN
         DISPLAY – userOne is in first place!
         DISPLAY – userTwo and userThree are tied in second place!
29. IF rockNum1 == rockNum3 && rockNum2 > rockNum1 THEN
         DISPLAY – userTwo is in first place!
         DISPLAY – userOne and userThree are tied in second place!
30. IF rockNum2 == rockNum1 && rockNum1 <  rockNum3 THEN
         DISPLAY – userThree is in first place!
         DISPLAY – userOne and userTwo are tied in second place!
31. SET  rockNumTotal = rockNum1 + rockNum2 + rockNum3
32. SET avgRockCount = static_cast<double> rockNumTotal / NUM_PLAYERS
33. DISPLAY - the average number of rocks collected today is [avgRockCount]!
34. Goodbye message 
```
