#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d %d %d",&n,&m,&a);
    long long int x,y;
    if(n%a==0){
        x=n/a;
    }
    if(m%a==0){
        y=m/a;
    }
    printf("%lld",x*y);
    return 0;
}