// Problem 9

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is greater than %d", a, b);
    }

    else if(b>a)
    {
        printf("%d is less than %d", a, b);
    } 
    else
    {
        printf("They are equal");
    }
    return 0;
}