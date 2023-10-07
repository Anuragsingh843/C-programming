//Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0,n,even_number;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       even_number=2*i;
       sum=sum+even_number;

    }
    printf("sum of even number: %d",sum);
}
