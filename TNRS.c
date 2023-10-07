// Takes  Nothing,Returns Something
#include<stdio.h>
int add();
int main()
{
    int s;
    s=add();
    printf("Sum is %d ",s);
    printf("\n");
    return 0;
}
int add()
{
    int a,b,c;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
