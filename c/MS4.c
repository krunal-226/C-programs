// WAP to check if given year is leep year or not
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%4 == 0)
    printf("The given year is leep year");
    else
    printf("The given year is not leep year");

}