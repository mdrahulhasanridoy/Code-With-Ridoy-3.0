# Introduction To Programming Language

1. What is Program ?
- Set of Instrucstion are Program

Machine only understand 0 & 1 . 
- Compiler & Interpreter can convert programming language to 0 & 1 ( machine language )

### What is Compiler ?
- Compiler is a program that converts source code into machine code, which is then executed by the computer.

### What is interpreter ?
- Interpreter is a program that reads the source code and executes it line by line.

### What is machine language?
- Machine language is the lowest level of programming language. It is the language that is understood by the computer. It is a series of binary digits (0s and 1s) that are executed by the computer.

Let's run your first program in C.

**Write a program that prints "Hello World" on the screen.**

```c
#include <stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
```
- Input ➡️ **Program** ➡️ Output
- Input ➡️ ***Processing*** ➡️ Output

Example : 
1. Input x, y ➡️ **sum** ➡️ x + y
2. Input x, y ➡️ **Even** ➡️  Yes/No

**Sum 2 numbers flow chart**
```mermaid
graph LR
A[Start] --> B[/Input x, y/]
B --> id1[ S = x + y ] --> C[/Print s/] --> D[End]
```

**Average flow chart**
```mermaid
graph LR
A[Start] --> B[/Input x, y, z/]
B --> id1[ S = x + y + z ] --> id2[ avg = s / 3 ] --> C[/Print avg/] --> D[End]
```

**Data Type**
    
    - int (Example : 1, 2, 3, 4, 5)
    - float (Example : 1.234567)
        - Note: After using point(.) it will be float and you can use  6 digit after point. It will be right.
    - char (Example : 'A', 'B', 'C')
    - double (Example : 1.234 567 890 123 456)
        - Note: After using point(.) it will be double and you can use  15 digit after point. It will be right.

**Variable writing rules**

✅ a1  a2

❌ 1a  12a

✅ a1b

❌ Student mark

✅ Student_mark

❌ puncation marks not allow in variables name

❌ keyword ; 
    - Example : if else for while return printf

**Input & Output**

- Input : scanf()
- Output : printf()

```c
#include<stdio.h> // stdio.h is a header file
int main() // main is a function
{
    int x; // x is a variable
    scanf("%d\n", &x); // &x is a address of x
    printf("%d", x); // %d is a format specifier
    return 0; // return 0 is a exit status
}
```
- \n - new line

**WAP to input two numbers and print their sum.**

```c
#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", x + y);
    return 0;
}
```
**WAP to find the area of circle.**

```c
#include<stdio.h>
    float r;
    scanf("%f", &r);
    printf("%f", 3.1416 * r * r);
    return 0;
}
```
# Practice Problem

### Problem 1

```
Write a C program to show output like below:
Hi there /\.      I hope you are doing great and practicing well.
Now this is a simple task you need to do.       Just care for the indentation.
Show 100% of sincerity.
```
[Solution](https://github.com/mdrahulhasanridoy/Code-With-Ridoy-3.0/blob/2f7b0a13e3149352488981c60dd93b10fdfbe190/Introduction%20To%20Programming%20Language/Week%2001%20Introduction%20To%20Progrqamming%20In%20C/Problem%201.c)

### Problem 2

```
Write a C program to declare two integer variables and set values 10 and 20 respectively. Now print the second number and then the first number.
```
|Sample Input | Sample Output  |
| ----------- | ------------- |
| No Input  | 20   10|

[Solution](https://github.com/mdrahulhasanridoy/Code-With-Ridoy-3.0/blob/2f7b0a13e3149352488981c60dd93b10fdfbe190/Introduction%20To%20Programming%20Language/Week%2001%20Introduction%20To%20Progrqamming%20In%20C/Problem%202.c)
### Problem 3

```
Write a C program to take one positive integer as input and print double of it.
```
|Sample Input | Sample Output  |
| ----------- | ------------- |
| 5 | 10|

[Solution](https://github.com/mdrahulhasanridoy/Code-With-Ridoy-3.0/blob/2f7b0a13e3149352488981c60dd93b10fdfbe190/Introduction%20To%20Programming%20Language/Week%2001%20Introduction%20To%20Progrqamming%20In%20C/Problem%203.c)
### Problem 4

```
Write a C program to take two positive integers as input and show the summation, subtraction and multiplication of those two numbers.
```
|Sample Input | Sample Output  |
| ----------- | ------------- |
|  5 2|  7 3 10|

[Solution](https://github.com/mdrahulhasanridoy/Code-With-Ridoy-3.0/blob/2f7b0a13e3149352488981c60dd93b10fdfbe190/Introduction%20To%20Programming%20Language/Week%2001%20Introduction%20To%20Progrqamming%20In%20C/Problem%204.c)
### Problem 5

```
Write a C program to take a character variable and input and show the corresponding ASCII value of that character
```

| Sample Input | Sample Output |
| ------------ | ------------- |
| A            | 65            |
| C            | 67            |
| a            | 97            |
| d            | 100           |

[Solution](https://github.com/mdrahulhasanridoy/Code-With-Ridoy-3.0/blob/2f7b0a13e3149352488981c60dd93b10fdfbe190/Introduction%20To%20Programming%20Language/Week%2001%20Introduction%20To%20Progrqamming%20In%20C/Problem%205.c)
### Problem 6

```
Write a C program to take integer value as input and print that value. There is a twist! The input will contain a % sign.
```
|Sample Input | Sample Output  |
| ----------- | ------------- |
| 10% | 10|

[Solution](https://github.com/mdrahulhasanridoy/Code-With-Ridoy-3.0/blob/2f7b0a13e3149352488981c60dd93b10fdfbe190/Introduction%20To%20Programming%20Language/Week%2001%20Introduction%20To%20Progrqamming%20In%20C/Problem%206.c) 

