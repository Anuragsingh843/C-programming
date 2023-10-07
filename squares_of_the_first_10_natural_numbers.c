//8. Write a program to print squares of the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int i;
    printf("squares of the first 10 natural numbers\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}