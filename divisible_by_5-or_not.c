//2. Write a program to check whether a given number is divisible by 5 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("The number is divisible by 5= %d ",num);
    }
    else
    {
        printf("The number is not divisible by 5= %d",num);
    }
    return 0;
}
