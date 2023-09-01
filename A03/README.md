# CS 161A: Programming and Problem Solving I - Assignment A03

## Description

It’s easy for one to eat too many Oreos cookies without realizing how much sugar they contain. This program will read the number of cookies eaten by the user (integer) and calculate the number of servings (double) and the number of grams of sugar (integer) that exist in that number of cookies.

## Sample run

```
Welcome to the Oreo sugar calculator!

Please enter the number of cookies you've eaten:
> 12

12 cookies is 2.4 servings and contains 168 grams of sugar.

Thanks for enjoying Oreos!
```

```
Welcome to the Oreo sugar calculator!

Please enter the number of cookies you've eaten:
> 3

3 cookies is 0.6 servings and contains 42 grams of sugar.

Thanks for enjoying Oreos!
```

## Input

- `cookiesEaten` as integer

## Output

- `totalServings` as double
- `gramsSugar` as integer

## Calculations

### Total servings in a given number of cookies

`totalServings = static_cast<double>(cookiesEaten) / COOKIES_PER_SERVING`

### Total amount of sugar in grams

`gramsSugar = cookiesEaten * GRAMS_SUGAR_PER_COOKIE`

## Pseudocode

```
1. SET SERVING_SIZE as a constant integer = 5
2. SET SUGAR_CONTENT as a constant integer = 14
3. DECLARE variables numCookie and sugarConsumed as integers
4. DECLARE variable numServings as a double
5. Display Welcome Message
6.  DISPLAY prompt - enter the number of oreos eaten: 
7. INPUT into numCookie
8. SET numServings = (numCookie converted to double)  / SERVING_SIZE
9. SET sugarConsumed = numCookie * SUGAR_CONTENT
10. DISPLAY numCookie oreos equals numServings servings! 
11. DISPLAY You’ve consumed sugarConsumed gms of sugar.
12. DISPLAY “Keep eating Oreos!” message. 
13. END program
```

## Flowchart

![A03 flowchart](./A03-flowchart.png)
