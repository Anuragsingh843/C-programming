//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("sum of cubes is %d ",sum);
    return 0;
}
