//write a program to print first 10 natural number.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("The 10 natural number %d\n",i);
        i++;
    }
    return 0;
}