//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2,HCF;
    printf("Enter the two numbers\n");
    scanf("%d %d",&num1,&num2);
    HCF=hcf(num1,num2);
    printf("HCF is %d\n",HCF);

    return 0;
}
int hcf(int a,int b)
{
    int temp;
    while (b!=0)
    {
       temp=b;
       b=a%b;
       a=temp;
    }
    return a;
}