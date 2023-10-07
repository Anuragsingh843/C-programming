//8. Write a program to check whether the given number is even or odd using a bitwise operator.
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