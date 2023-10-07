/*8. Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the leap year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Non Leap Year");
        }
    }
}


