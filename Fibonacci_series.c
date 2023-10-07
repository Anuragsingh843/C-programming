//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int fib(int);
    int i,n;
    printf("Enter the fibonacci series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d ",fib(i));
        
    }
    return 0;
}
    int fib(int n)
    {

        if(n==1||n==2)
        return(1);
        return(fib(n-1)+fib(n-2));
    }


