# Mini ATM System

## Description
This C program simulates a simple console-based **ATM (Automated Teller Machine)** interface.  
It allows users to perform basic banking transactions, such as checking account balances, depositing funds, and withdrawing money, complete with input validation and error handling.

## 🛠️ Menu Operations & Logic
- **1. Check Balance** → Displays the current available account balance (Default initial balance: ₹50,000).
- **2. Withdraw Money** → Deducts the specified amount after validating for sufficient balance and positive inputs.
- **3. Deposit Money** → Adds the specified positive amount to the account balance.
- **4. Exit** → Gracefully exits the application.

---

## 💻 Example Usage
```text
---ATM Menu---
1. Check Balance
2. Withdraw
3. Deposit
4. Exit
What Operation U Want To Perform? : 2
Enter The Amount To Withdraw : 5000
Now Your Balance Is : 45000.00
```

---

## ▶️ How to Compile & Run

### **On Linux / macOS:**
```bash
gcc atm.c -o atm
./atm
```

### **On Windows:**
```cmd
gcc atm.c -o atm.exe
atm.exe
```
