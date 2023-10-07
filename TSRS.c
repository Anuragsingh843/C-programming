// Take something, Returns Something
#include<stdio.h>
int add(int,int);
int main()
{
    int s,x,y;
    printf("Enter the two numbers\n");
    scanf("%d%d",&x,&y);
    s=add(x,y);  // Function call by passing values(call by values)
    printf("Sum is %d ",s);
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}




