//WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.
#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter the radius of circle: \n");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of the circle is %f",area);
    return 0;
}