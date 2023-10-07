//write a program to calculate average of 100 numbers using Array.
#include<stdio.h>
int main()
{
    int a[100],i,sum=0;
    float avg;
    printf("Enter the numbers: ");
    for(i=0;i<99;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<99;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/100.0;
    printf("Average is %2f",avg);
    return 0;
}

