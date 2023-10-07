//write a recursion function to calculate factorial of n.
#include<stdio.h>
int fact(int);
int main()
{
   int r,x;
   printf("Enter the number for factorial\n");
   scanf("%d",&x);
   r=fact(x);
   printf("Factorial of number is %d ",r);
   return 0;
}
int fact(int n)
{
    if(n==1 || n==0)
       return 1;
    return n*fact(n-1);
}
