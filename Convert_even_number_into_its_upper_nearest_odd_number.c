/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include <stdio.h>
int main()
{
    int units,surcharge;
    float totalBill = 0;
    printf("Enter the total units consumed: ");
    scanf("%d", &units);

    switch (units)
     {
        case 0 ... 50:
            totalBill = units*0.50;
            break;
        case 51 ... 150:
            totalBill =50*0.50+(units - 50)*0.75;
            break;
        case 151 ... 250:
            totalBill = 50*0.50+100*0.75+(units - 150)*1.20;
            break;
        default:
            totalBill = 50*0.50+100*0.75+100*1.20+(units - 250)*1.50;
            break;
    }
    surcharge=0.20*totalBill;
    totalBill=totalBill+surcharge;
    printf("Total electricity bill: Rs. %.2f\n", totalBill);
    return 0;
}
