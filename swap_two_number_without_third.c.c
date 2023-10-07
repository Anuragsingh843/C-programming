//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int x,b;
    printf("Enter the two values to swap :");
    scanf("%d %d",&x,&b);
    x=x+b;
    b=x-b;
    x=x-b;
    printf("The swap value is %d %d",x,b);
    return 0;
}