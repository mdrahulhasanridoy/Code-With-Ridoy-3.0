#math_for_programming 

# GCD - Greatest Common Divisior

- Divisor
- Common divisor
- Greatest common divisor
- Example: Find the gcd of 15 & 16
	- Divisors of 15: 1, 3, 5, 15
	- Divisors of 16: 1, 2, 3, 6
	- Common divisors: 1, 3
	- GCD (Great Common Divisor): 3

- Co-prime: If gcd(a, b) = 1, then a & b are co-prime
- Example: 15 & 16 are co-prime
	- Example: 8 & 15

# GCD - How To Calculate?

- Simple way to find gcd(a,b)
	- Take i to be 1 to min(a,b)
	- Check if i divides both a & b
	- Largest such i is the gcd

# GCD - The Euclidean Algorithm

- gcd(a, b) = gcd(b, a mod b)
or, gcd(a, b) = gcd(b, a % b)
- gcd(p, 0) = gcd(0, p) = p
- Example: 
	   gcd(15,6)      //**gcd(a, b)**
	 = gcd(6, 3)     //**gcd(b, a % b)**
	 = gcd(3, 0)    //**gcd(p, 0)**
	 = 3

- Changing order does not matter
	- gcd(6,15) = gcd(15,6) = ... = 3

- gcd(15,8) = gcd(8,7) = gcd(7,1) = gcd(1,0) = 1 ➡️ Co-prime

# LCM - Least Common Multiple

- Multiple
- Common multiple
- Least common multiple
- Example: Find the lcm of 15 & 6
	- Multiples of 15: 15, 30, 45, 60,...
	- Multiples of 6: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60,...
	- Common multiples: 30, 60,...
	- LCM (Least Common Multiple): 30

# LCM - How To Calculate?

- Simple way to find lcm(a,b)
	- Take multiples of the larger number and see if the smaller number divides it

- Or you may find it using gcd:
	```math
	gcd(a, b) * lcm(a, b) = a * b
	```
	-Example: lcm(15,6) = 15 * 6 / 3 = 30

# Factorial

- A function defined for non-negative integers
     - 0,1,2,3,......
```math
n! = n * (n-1) * (n-2) * (n-3) * .... * 3 * 2 * 1
```
- Example: 4! = 4 * 3 * 2 * 1 = 24
- Exception: 0! = 1

- 5! = 120 ➡️ divide it by 5 to get 24
- 4! = 24 ➡️ divide it by 4 to get 6
- 3! = 6 ➡️ divide it by 3 to get 2
- 2! = 2 ➡️ divide it by 2 to get 1
- 1! = 1 ➡️ divide it by 1 to get 1
- 0! = 1 

- Consider a cricket team with 11 players
- How many batting orders are possible?

- What if we had 2 players ?
    - Answer : 2 (2!)
	- AB or BA

- What if we had 3 players ?
	- Answer : 6 (3!)
	- ABC, ACB, BAC, BCA, CAB, CBA

- Now go for 11 players
	- Answer : 39916800
	- 11! = 11 * 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 39916800

# Introduction To Matrices

- Collection of numbers arranged in rows and columns

| A   | 3 Columns |     |     |        |
| --- | --------- | --- | --- | ------ |
| ⬇️  | ⬇️        | ⬇️  |     |        |
| -2  | 5         | 6   | ⬅️  | 2 Rows |
| 5   | 2         | 7   | ⬅️  |        |

- A matrix with 2 rows and 3 columns is called a 2x3 matrix
- Ai,j = ?
	- i = row number
	- j = column number

A2,3 = ?
	- 2nd row
	- 3rd column
	- 7

Where is the 5 located?
	- 1st row
	- 2nd column

- Column Matrix
	- A matrix with 1 column
	- Example: 
$$\matrix{A} = \begin{bmatrix} 1 \\ 2 \\ 3 \\ 4 \end{bmatrix}$$

- Row Matrix
	- A matrix with 1 row
	- Example: 
$$\matrix{A} = \begin{bmatrix} 1 & 2 & 3 & 4 \end{bmatrix}$$

# Adding Matrices

- Rows indicate individual students ( 3 students )
- Columns indicate individual exams ( 2 subjects )
- Matrix as an exam result table:
```math
\matrix{Midterm+Final} = \begin{bmatrix} 40 & 36 \\ 28 & 32 \\ 30 & 27 \end{bmatrix}+ \begin{bmatrix} 19 & 35 \\ 48 & 12 \\ 33 & 48 \end{bmatrix} = \begin{bmatrix} 59 & 71 \\ 76 & 44 \\ 63 & 75 \end{bmatrix}
```
