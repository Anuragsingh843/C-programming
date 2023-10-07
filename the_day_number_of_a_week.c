/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
#include<stdalign.h>
int main()
{
    int days;
    printf("Enter the days in number: ");
    scanf("%d",&days);

    switch(days)
    {
    case 1:
        printf("Dedicated to Lord Shiva.");
        break;
    case 2:
        printf("Dedicated to Lord Hanuman and Lord Kartikeya.");
        break;
    case 3:
        printf(" Dedicated to Lord Ganesha");
        break;
    case 4:
        printf("Dedicated to Lord Vishnu");
        break;
    case 5:
        printf("Dedicated to Goddess Lakshmi");
        break;
    case 6:
        printf("Dedicated to Lord Shani");
        break;
    case 7:
        printf("Dedicated to Lord Surya");
        break;
    default:
        printf("Invalid Week days");
    }
    return 0;
}
