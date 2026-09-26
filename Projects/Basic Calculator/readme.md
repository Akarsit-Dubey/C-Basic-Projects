# Simple Calculator

## Description
A console calculator written in C.  
The program allows the user to perform basic arithmetic operations (addition, subtraction, multiplication, and division) on two floating-point numbers using a `switch-case` structure and includes validation to prevent runtime errors like division by zero.

## Features
- **Menu-Driven Interface** → Clear list of supported operations.
- **Input Validation** → Checks whether the selected menu option is valid before requesting numbers.
- **Error Trapping** → Safely handles division by zero (`num2 == 0`) with a clear error prompt.
- **Floating-Point Precision** → Supports decimal numbers rounded cleanly to two decimal places.

## Operations
- **1** → Addition (`+`)  
- **2** → Subtraction (`-`)  
- **3** → Multiplication (`x`)  
- **4** → Division (`/`)  

## Example Run
```
--- Calculator ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter The Operation to perform : 4

Enter Two Numbers : 15 2
15.00 / 2.00 = 7.50
```
## ▶️ How to Compile & Run

### Linux / macOS / Windows

```bash
gcc calculator.c
./calculator
```
