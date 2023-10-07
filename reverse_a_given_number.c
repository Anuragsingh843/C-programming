//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,remainder,rev;
    printf("Enter the number to reverse\n");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
     printf("The reverse of number is%d ",rev);
    return 0;
}
