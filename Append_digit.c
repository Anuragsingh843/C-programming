/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int number,digit,resulting;
    printf("Enter the number: ");
    scanf("%d%d",&number,&digit);
    resulting=(number*10+digit);
    printf("Resulting number is %d",resulting);
    return 0;
}