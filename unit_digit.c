// Write a program to print unit digit of a given number
# include<stdio.h>
int main()
{
    int x,unit_digit;
    printf("Enter the number: ");
    scanf("%d",&x);
    unit_digit=(x%10);
    printf("unit digit is %d",unit_digit);
    return 0;     
}