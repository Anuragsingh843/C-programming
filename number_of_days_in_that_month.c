//1. Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>

int main() {
    int month;

    // Getting input from the user
    printf("Enter the month number: ");
    scanf("%d", &month);

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        printf("Number of days in %d is 31\n",month);
        break;

    case 4:
    case 6:
    case 9:
    case 11:

        printf("Number of days in %d is 30\n",month);
        break;

    case 2:
        printf("Number of days in %d is 28 or 29\n",month);
        break;

    default:
        printf("Invalid month number\n");
        break;

    }
    return 0;
}
