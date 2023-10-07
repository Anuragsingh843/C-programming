//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int);
int main()
{
    int result,x;
    printf("Enter the number to Square: ");
    scanf("%d",&x);
    result=square(x);
    printf("Square of number is %d ",result);
    return 0;
}
int square(int a)
{
    int square1;
    square1=a*a;
    return square1;
}
