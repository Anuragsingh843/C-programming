// Write a program to print the first 10 odd natural numbers.
#include<stdbool.h>
int main()
{
    int i;
    printf("The first 10 odd natural numbers\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*2-1);
    }
    return 0;
}
