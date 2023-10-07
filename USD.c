/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main()
{
   float oneUSD=76.23;
   float INR,USD;
   printf("Enter the INR:\n");
   scanf("%f",&INR);
   USD=INR/oneUSD;
   printf("The amount in INR and convert it into USD is: %.2f",USD);
   return 0;
}