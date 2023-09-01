# CS 161A: Programming and Problem Solving I - Assignment A02

## Description

This program will estimate the number of jellybeans that could fit inside a jar. The user will enter the height and width of a single jelly bean in centimeters as well as the volume of the jar in millileters and output an approximation of the number of jellybeans of the given size that could fit into a jar of the given volume.

## Sample run

```
Let's guess how many jelly beans will fit into a jar!
Enter the length of one jelly bean (cm):
1.52
Enter the height of one jelly bean (cm):
0.9
Enter the volume of the jar (mL):
500
Approximately 433 jelly beans could fit in a jar with a volume of 500 mL.
```

```
Let's guess how many jelly beans will fit into a jar!
Enter the length of one jelly bean (cm):
1.2
Enter the height of one jelly bean (cm):
0.5
Enter the volume of the jar (mL):
255
Approximately 906 jelly beans could fit in a jar with a volume of 255 mL.
```

## Input
jar_size - integer
jelly_volume - integer
length_jb – float / double
height_jb - float / double

### Constant values

`LOAD_FACTOR` as float (this is the amount of space inside the jar occupied by jellybeans and will not be entered by the user)
`M_PI` – constant double (from library)
## Output

`totalJellyBeans` as integer

## Calculations

Volumn of one jelly bean:

`jellyBeanVol = (5 * PI * (jellyBeanHeight * jellyBeanWidth^2)) / 24`

Total number of jelly beans that would fit in the jar:

`totalJellybeans = jarVolume * LOAD_FACTOR / jellyBeanVol`

## Pseudocode

```
1. DECLARE constant double LOAD_FACTOR = 0.689
2. DECLARE double length_jb 
3. DECLARE double height_jb
4. DECLARE integer jar_size
5. DECLARE integer jelly_volume 
6. DECLARE  integer total_beans
6.5 DECLARE const double M_PI – from cmath library 
7. DISPLAY “WELCOME TO THE ULTIMATE JELLY BEAN COUNTER!!”
8. DISPLAY “Enter length of a jelly bean (cm) : “ 
9. INPUT length_jb
10. DISPLAY “Enter height of a jelly bean (cm) : “
11. INPUT height_jb
12. DISPLAY “Enter the size of your jar (ml): “
13. INPUT jar_size
14. SET jelly_volume = ((5 * pi * length_jb * (height_jb)^2)/24 
15. SET total_beans = (jar_size * LOAD_FACTOR) / jelly_volume
16. DISPLAY “ESTIMATED NUMBER OF JELLY BEANS IN YOUR JAR: “;
17. OUTPUT total_beans << endl;
```
