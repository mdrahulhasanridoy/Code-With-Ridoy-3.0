//Problem 7

#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    int sum = a + b + c;

    printf("Sum = %d\n", sum);

    float average = (float)sum / 3; //Typecasting

    printf("Average = %f\n", average);

    return 0;
}