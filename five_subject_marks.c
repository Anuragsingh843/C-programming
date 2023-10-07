/*17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter the five subjects mark\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m4>=33)
    {
        printf("The candidate passed the examination \n");
    }
    else
    {
        printf("The candidate failed the examination\n");
    }
    return 0;
}