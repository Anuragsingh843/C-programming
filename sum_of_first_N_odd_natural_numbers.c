//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i % 2!=0)
        sum=sum+i;
    }
    printf("sum of first N odd natural numbers %d ",sum);
    return 0;
}
