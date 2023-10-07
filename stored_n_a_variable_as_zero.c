/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int num,newnum;
    printf("Enter the number\n");
    scanf("%d",&num);
    newnum=(num/10*10);
    printf("The output is %d",newnum);
    return 0;
}