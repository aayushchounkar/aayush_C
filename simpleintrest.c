#include<stdio.h>
int main()
{
    float p,n;
    float r=9.5;

    printf("enter principal amount : ");
    scanf("%f",&p);
    printf("enter how many years you want to invest : ");
    scanf("%f",&n);

    float SI = (p*r*n)/100;

    printf("your simple intrest is %f",SI);
    return 0
}