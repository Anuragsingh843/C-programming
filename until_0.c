/*write a program to add numbers entered by the user.User can enter any number of numbers until he enters 0 */
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    for(i=1;i!=0;i++)
    {
        printf("Enter the number to add\n");
        scanf("%d",&n);
        sum=sum+n;
        if(n==0)
         break;

    }
    printf("Sum is %d",sum);
    return 0;
}
