// Takes Nothing,Return Nothing
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("Enter the two  number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d ",c);
}
