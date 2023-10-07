/*6. Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number:\n ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is greater");
    }
    if(a==b)
    {
        printf("a is equal b %d\n",a);
    }
    if(a<b)
    {
        printf("b is greater\n");
    }
    return 0;
}
