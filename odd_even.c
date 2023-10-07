//Write a program to check whether a given number is an even number or an odd number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number is even %d",num);
    }
    else
    {
        printf("The number is odd %d",num);
    }
    return 0;
}