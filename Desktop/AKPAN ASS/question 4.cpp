#include<stdio.h>
int main()
{
    float amount, discount, items, Priceforeachitem, amountToBePaid;
    items = 10;
    Priceforeachitem = 500;
    amount = items * Priceforeachitem;
    
    printf("Cost of your shopping is: %0.2f \n", amount);
    
    discount = (amount * 5) / 100;
    amountToBePaid = amount - discount;
    printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
    
    return 0;
} 	
