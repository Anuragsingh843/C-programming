/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x,a,b,c;
    while(1)
    {
        printf("\n1.Isosceles Triangle");
        printf("\n2.Right Angled Triangle");
        printf("\n3.Equilateral Triangle");
        printf("\n4.Exit");
        printf("\nEnter Your choice :");
        scanf("%d",&x);
        switch(x)
        {
         case 1:
           printf("Enter the three length of isosceles triangle\n");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b || a==c || b==c)
           {
               printf("These lengths from isosceles triangle\n");
           }
           else
           {
               printf("These lengths do not from  isosceles triangle\n");
           }
              break;
         case 2:
                printf("Enter three sides : ");
                scanf("%d %d %d", &a,&b,&c);

                if(c=sqrt(a*a + b*b))
                {
                    printf("These sides form a Right-Angled Triangle %d.\n",c);
                }
                else
                {
                    printf("These sides do not form a Right-Angled Triangle.\n");
                }
                   break;
         case 3:
             printf("Enter the three lengths of equilateral triangle\n");
             scanf("%d%d%d",&a,&b,&c);
             if(a==b && b==c)
             {
                 printf("The lengths from equilateral triangle\n");
             }
             else
             {
                 printf("The lengths do not from equilateral triangle\n");
             }
             break;
         case 4:
            exit(0);
            break;
         default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}
