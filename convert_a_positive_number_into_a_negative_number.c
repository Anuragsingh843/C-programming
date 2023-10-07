/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/
#include<stdio.h>
int main()
{
    int number;
    char choice;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("Enter the operation: ");
    scanf(" %c",&choice);

    switch(choice)
    {
    case '+':
        number = -number;
        printf("Result is %d\n",number);
        break;
    case '-':
        number = -number;
        printf("Result Is %d\n",number);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
