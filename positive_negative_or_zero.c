//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The number is positive\n");
    }
    if(num==0)
    {
        printf("The number is zero\n");
    }
    if(num<0)
    {
        printf("The number is negative\n");
    }
    return 0;
}