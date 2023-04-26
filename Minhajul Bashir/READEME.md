
# Day 1

~ Problem 1
Write a C Program to calculate the distance covered by a moving body, using the following formula:

```math
\begin{align}
\text{s} &= \text{u} \text{t} + \frac{1}{2} \text{a} \text{t}^2 \\
\end{align}
```
```c
#include <stdio.h>
#include <math.h>

int main()
{
    float s, u, a, t;
    printf("Enter the value of u, a and t: ");
    scanf("%f %f %f", &u, &a, &t);
    s = u * t + 0.5 * a * pow(t, 2);
    printf("The distance covered is: %f", s);
    return 0;
}
```