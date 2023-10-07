#include <stdio.h>
int lcm(int ,int);
int gcd(int , int);
int main() 
{
    int num1, num2,result;
    printf("Enter the Two numbers: ");
    scanf("%d %d",&num1,&num2);
    result = lcm(num1, num2);
    printf("LCM is %d\n",result);

    return 0;
}


int gcd(int a, int b) 
{
    int temp;
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

