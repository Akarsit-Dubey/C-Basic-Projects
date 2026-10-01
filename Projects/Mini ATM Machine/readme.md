# Mini ATM System

## Description
This C program simulates a simple console-based **ATM (Automated Teller Machine)** interface.  
It allows users to perform basic banking transactions dynamically, such as checking their account balance, depositing funds, and withdrawing money with built-in input validation.

## Features & Operations
- **1. Check Balance** → Displays current account balance (Initial: 50,000).
- **2. Withdraw** → Deducts funds (Prevents overdrawing or negative amounts).
- **3. Deposit** → Adds funds (Ensures valid deposit amounts).
- **4. Exit** → Terminates the ATM menu loop.

## Example 
```
---ATM Menu---
1. Check Balance
2. Withdraw
3. Deposit
4. Exit
What Operation U Want To Perform? : 2
Enter The Amount To Withdraw : 5000
Now Your Balance Is : 45000.00
```

## ▶️ How to Compile & Run

```bash
gcc atm.c -o atm
./atm
```
