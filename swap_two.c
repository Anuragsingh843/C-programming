//3. Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number to swap :");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("Swap number using third variable %d %d",x,y);
    return 0;
}