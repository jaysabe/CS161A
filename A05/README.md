# CS 161A: Programming and Problem Solving I - Assignment A05

## Description

This program will break a user-entered email address into its constituent parts: username and domain. If the email address is missing an '@' symbol, an error will be displayed instead.

## Sample Run

```
Welcome to the Email Address Domain Namer Program!

Enter an email address: google@google.com

You entered: google@google.com
UserName: google
Domain Name: google.com

Thank you for using my program!
_________________________________________________________________________
Welcome to the Email Address Domain Namer Program!

Enter an email address: jaycool@persononinternet.com

You entered: jaycool@persononinternet.com
UserName: jaycool
Domain Name: persononinternet.com

Thank you for using my program!
_________________________________________________________________________
Welcome to the Email Address Domain Namer Program!

Enter an email address: thisisaveryneatemail.com
You entered: thisisaveryneatemail.com

This is an invalid email address. Please remember to include an @ symbol. Please check and try again later.

Thank you for using my program!
```

## Inputs

`emailAddress` as string

## Outputs

`username` as string
`domain` as string

## Calculations

### Locate the ‘@’ symbol in the email address

`atSignIndex = emailAddress.find(‘@’)`

### Split the email address into its username and domain

`username = emailAddress.substr(0, atSignIndex)`

`domain = emailAddress.substr(atSignIndex + 1, emailAddress.length()) `

## PSEUDOCODE:
DISPLAY welcome message
DECLARE variables emailAddress, userName, and domainName as string types
DECLARE variable atSymbolIndex as an integer type
 DISPLAY prompt - Enter an email address:
INPUT emailAddress
SET atSymbolIndex assigned position of ‘@’
IF ‘@’ not found THEN
DISPLAY Error Message
END program
ELSE
DISPLAY prompt - You entered: {emailAddress}
SET userName to the first part of emailAddress until ‘@’ using substr() function
SET domainName to the rest of the characters after the ‘@’ using substr() function
DISPLAY -  UserName: 
DISPLAY - Domain Name:
DISPLAY thank you message 

## Flowchart

![A05 Flowchart](./flowchart.png)
