#include<stdio.h>
void main()
{
    int cp,sp;

    printf("Enter the cost price and selling price: ");
    scanf("%d%d",&cp,&sp);

    if (sp >= cp)
    {
        printf("You made an profit!!");
        printf("\nProfit: %d\n",sp-cp);
    }
    else
    {
        printf("You did not made an profit!!\n");
        printf("\nLoss: %d\n",cp-sp);
    }
    
}