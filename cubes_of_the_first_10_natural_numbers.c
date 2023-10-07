//9. Write a program to print cubes of the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int i;
    printf("Cubes of the first 10 natural numbers\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}