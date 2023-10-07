//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The number is  positive %d",num);
    }
    if(num<=0)
    {
        printf("The number is non-positive %d",num);
    }
    return 0;
}