
#include <stdio.h>

int main()
{
    int a;
    float amt, total_amt, sur_charge;

  
    printf("Enter total units consumed: ");
    scanf("%d", &a);


    
    if(a <= 50)
    {
        amt = a * 0.50;
    }
    else if(a <= 150)
    {
        amt = 25 + ((a-50) * 0.75);
    }
    else if(a <= 250)
    {
        amt = 100 + ((a-150) * 1.20);
    }
    else
    {
        amt = 220 + ((a-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

 
}