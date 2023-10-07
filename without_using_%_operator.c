/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number :");
  scanf("%d",&num);
  if(num & 1)
  {
    printf("The number is odd %d",num);
  }  
  else
  {
    printf("The number is even %d",num);
  }
  return 0;
}
