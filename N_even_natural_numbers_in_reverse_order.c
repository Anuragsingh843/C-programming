//7. Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",n-i);
        }
    }
    return 0;
}
