//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the three digit number :");
    scanf("%d%d%d",&a,&b,&c);
    sum=(a+b+c);
    printf("sum of three digits is %d",sum);
    return 0;
}