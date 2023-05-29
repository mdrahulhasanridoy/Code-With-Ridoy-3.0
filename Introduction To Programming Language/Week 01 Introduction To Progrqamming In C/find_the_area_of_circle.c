//find the area of circle
//Area = pi*radius*radius*/

#include<stdio.h>
#include<math.h>
int main()
{
    float pi = 3.1416;
    float area, radius;
    scanf("%f", &radius);
    area = pi*pow(radius,2);//pow() use for power
    printf("%f",area);
    return 0;
}