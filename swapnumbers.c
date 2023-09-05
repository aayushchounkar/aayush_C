#include<stdio.h>
int main()
{
    int a,b,copy;
    printf("enter value of a :");
    scanf("%d", &a);

    printf("enter value of b :");
    scanf("%d", &b);

    copy=a;
    a=b;
    b=copy;
    printf("swaped values of a and b are %d and %d", a, b);
    return 0;
}