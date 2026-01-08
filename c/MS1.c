// Wap to check weather a number is negative , positive or zero 
#include<stdio.h>
void main()
{
    float a ;
    printf("Enter a number : \n");
    scanf("%f", &a);
    if(a>0)
    printf("%f is a positive number",a);
    else if (a == 0)
    printf("The given number is zero");
    else
    printf("%f is a negative number", a);
}