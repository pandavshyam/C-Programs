/*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred. */
#include<stdio.h>
int main()
{
    int costPrice, sellingPrice;

    printf("Enter cost price and selling price: ");
    scanf("%d%d",&costPrice,&sellingPrice);

    if (costPrice > sellingPrice)
    {
        printf("Loss incurred : %d\n",costPrice-sellingPrice);
    }
    else if (costPrice < sellingPrice)
    {
        printf("Profit : %d\n",sellingPrice-costPrice);
    }
    else
    {
        printf("No loss no profit\n");
    }
    
}