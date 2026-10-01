# Cafe Ordering System

## Description
This C program simulates an interactive console-based menu system for **Akarsit's Cafe**. 

It allows users to order items, select item quantities, calculate the total bill dynamically, and view the final checkout bill before exiting.

## 📜 Menu & Pricing
- **1. Coffee** → 40 Rs
- **2. Tea** → 15 Rs
- **3. Biscuit** → 20 Rs
- **4. Water** → 10 Rs
- **5. Bill / Checkout** → Generates the current total bill
- **6. Exit** → Exits the cafe menu system

## 💻 Example Usage

```
--- Akarsit's Cafe --- 
1. Coffee 40 Rs
2. Tea 15 Rs
3. Biscuit 20 Rs
4. Water 10 Rs
5. Bill / Checkout
6. Exit
What Would U Like To Order : 1
Please Enter Quantity Of Coffee You Need : 2
Added 2 Coffe Into Your Cart !

What Would U Like To Order : 5
Genrating Your Bill...
Your Total bill is : 80.00 Rs
```

## ▶️ How to Compile & Run

### **On Linux / macOS:**
```bash
gcc cafe.c -o cafe
./cafe
```

### **On Windows:**
```cmd
gcc cafe.c -o cafe.exe
cafe.exe
```
