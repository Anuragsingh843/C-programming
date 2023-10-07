//write a recursive function to print first n natural number.
#include<stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    natural(x);
    return 0;
}
void natural(int n)
{
    if(n==0)
      return 1;
    natural(n-1);
    printf("%d ",n);
}
