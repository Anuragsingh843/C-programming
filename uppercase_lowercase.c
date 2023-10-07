/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character\n");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("The character is upercase\n");
    }
    else if(a>='a' && a<='z')
    {
        printf("The character is lowercase\n");
    }
    else if(a>="0" && a<='9')
   {
     printf("The character is digit \n");
   }
   else
   {
    printf("The character is special character\n");
   }
   return 0;
    
}
