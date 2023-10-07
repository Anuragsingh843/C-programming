// Take Somethings,Returns Nothing
#include<stdio.h>
void add(int,int);
int main()
{
    int x,y;
    printf("Enter the Two numbers\n");
    scanf("%d%d",&x,&y);
    add(10,20);
    printf("\n");  //Actual Arguments
    return 0;
}
void add(int a,int b)  // Formal Arguments
{
    int c;
    c=a+b;
    printf("Sum is %d ",c);
}
