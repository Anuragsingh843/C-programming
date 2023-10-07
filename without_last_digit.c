//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number\n");
    scanf("%d",&x);
    y=(x/10);
    printf("The number is without last digit %d",y);
    return 0;
}