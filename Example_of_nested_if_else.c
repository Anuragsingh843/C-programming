/* this program will gib=ve error because after if block 
we can give one statement if there is no {}- bracket*/ 
int main()
{
    int x=5;
    if(x==4)
        printf("Hello");  // statement-1
        printf("%d",x);   // statement-2  error
    else
        printf("Bye");
        printf("%d",x);
}