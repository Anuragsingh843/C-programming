/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.printf("invalid");*/

#include<stdio.h>
int main()
{
    int var;
    printf("Enter the value: ");
    scanf("%d",&var);
    switch(var)
    {
    case 1:
        printf("Good\n");
        break;
    case 2:
        printf("Better\n");
        break;
    case 3:
        printf("Best\n");
        break;
    default:
        printf("Invalid\n");
    }
    return 0;
}
