//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i;
    printf("first 10 odd natural numbers in reverse order are\n");
    for (i=1;i<=20;i++)
    {
        if(i%2!=0)
        printf("%d\n",20-i);
    }
    return 0;
}