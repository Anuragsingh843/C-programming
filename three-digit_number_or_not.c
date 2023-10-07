//5. Write a program to check whether a given number is a three-digit number or not. 

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num>=100 && num<=999)
    {
        printf("The number is a three-digit %d",num);
    }
    else
    {
        printf("The number is not a three-digit %d",num);
    }
    return 0;
}