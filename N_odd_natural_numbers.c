//4. Write a program to print the first N odd natural numbers.
#include<stdbool.h>
int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*2-1);
    }
    return 0;
}
