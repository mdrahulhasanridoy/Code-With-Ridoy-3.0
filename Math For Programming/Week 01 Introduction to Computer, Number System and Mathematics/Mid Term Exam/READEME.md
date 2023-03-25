# Question 1 : Choose a prime number from the range of 50 to 100. We will call it P. 

```Solution```

**2 is the only even prime number. So, We can neglect the even number between 50 and 100.**

```math
51=1*3*17, 53=1*53, 55 =1*5*11, 57 =1*3*19, 59=1*59, 61=1*61, 63 =1*3*3* 7, 65=1*5*13, 67 =1*67, 69 =1*3*23, 71=1*71, 73 =1*73, 75 =1*3*5*5, 77=1*7*11, 79 =1* 79, 81=1*3*3*3*3, 83=1*83, 85 =1*5*17, 87 =1*3*29, 89=1*89, 91=1*7*13, 93=1*3*31, 95=1*5*19, 97 =1*97, 99 =1*3*3*11
```
**So, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 are the prime number.**
**Hence, P = 53**

# Question 2 : Find the binary representation of P. You must show the process.

```Solution```

**Binary representation of 53 is 110101**

**Hence, P = 53**

```
53 / 2 = 26  	Remainder is 1   LSB
26 / 2 = 13  	Remainder is 0
13 / 2 = 6  	Remainder is 1
6 / 2 = 3  	    Remainder is 0
3 / 2 = 1    	Remainder is 1
1 / 2 = 0   	Remainder is 1   MSB
```
**53 binary representation is 110101**

# Question 3 : You and your friends in class might be choosing different values for P. Can anybody choose a P that is an odd number?

```Solution```
```
2 is the only even prime number. So, We can neglect the even number between 50and 100.

So, anybody choose a P that is an odd number.
```

# Question 4 : Ternary numbers are formed with a number system with base 3. Given the ternary number 10212, find its decimal value.
    
    ```Solution```
```
Decimal equivalent of "2" = 2 × 3^0 = 2
Decimal equivalent of "1" = 1 × 3^1 = 3
Decimal equivalent of "2" = 2 × 3^2 = 18
Decimal equivalent of "0" = 0 × 3^3 = 0
Decimal equivalent of "1" = 1 × 3^4 = 81
Decimal equivalent of "10212" = 81+0+18+3+2
```
**Hence, 10212 = 104**

# Question 5 : Build a sieve of Eratosthenes to determine if 19 is a prime number. Show the state of the table at each step.

```Solution```
| ${\color{red}1}$ | 2                 | 3   | ${\color{red}4}$  | 5                 | ${\color{red}6}$  | 7   | ${\color{red}8}$  | ${\color{red}9}$ | ${\color{red}10}$ |
| ---------------- | ----------------- | --- | ----------------- | ----------------- | ----------------- | --- | ----------------- | ---------------- | ----------------- |
| 11               | ${\color{red}12}$ | 13  | ${\color{red}14}$ | ${\color{red}15}$ | ${\color{red}16}$ | 17  | ${\color{red}18}$ | 19               |                   |

```
1 is neither a prime number nor a composite. 2 is the smallest prime number which is even.Every prime number except 2 is odd.unmarked number 3,5 and mark all the numbers which are multiples of 3,5
```

# Question 6 : Take two natural numbers X and Y. If X * Y = Z, is Z even or odd when X and Y -
- (Case 1) both are even: even / odd
- (Case 2) both are odd: even / odd
- (Case 3) One of them is odd, the other one is even: even / odd
**Note: (Answer in even or odd)**
```
Case 1 : X = 2 , Y = 4  so, 2*4 = 8
Both are even = even
Case 2 : X = 1, Y = 3  so, 1*3 = 3
Both are odd = odd
Case 3 : X = 1, Y = 2 so, 1*2 = 2
One of them is odd, the other one is even = even.
```

# Question 7 : Find out all the divisors of 72 and 132 separately. What are the numbers that appear in both of the divisor lists?

```
72 divisors :   1, 2, 3, 4, 6, 8,    9, 12, 18,  24, 36 and 72

72/1 = 72          Remainder is 0
72/2 = 36          Remainder is 0
72/3 = 24          Remainder is 0
72/4 = 18          Remainder is 0
72/6 = 12          Remainder is 0
72/8 = 9            Remainder is 0
72/12 = 6          Remainder is 0
72/18 = 4          Remainder is 0
72/24 = 3          Remainder is 0
72/36=  2          Remainder is 0
72/72 = 1          Remainder is 0


132 divisors : 1, 2, 3, 4, 6, 11, 12, 22, 33, 44, 66, and 132.

132/1 = 132   Remainder is 0
132/2 = 66     Remainder is 0
132/3 = 44     Remainder is 0
132/4 = 33     Remainder is 0
132/6 = 22     Remainder is 0
132/11 = 12    Remainder is 0
132/12 = 11    Remainder is 0
132/22 = 6      Remainder is 0
132/33 = 4      Remainder is 0
132/44 = 3      Remainder is 0
132/66 = 2      Remainder is 0
132/132 = 1    Remainder is 0

Common : 1,2,3,4,6,12
```