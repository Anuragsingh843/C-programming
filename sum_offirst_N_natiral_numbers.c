// write a program to calculate sum of first N natiral numbers.
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first N natural is: %d",sum);
}