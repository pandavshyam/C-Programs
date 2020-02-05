#include<stdio.h>
void main()
{
    int amount;

    printf("Enter the amount to be withdrawn: ");
    scanf("%d",&amount);

    printf("\nRs. 100 Notes : %d ",amount/100);
    printf("\nRs. 50 Notes : %d",(amount%100)/50);
    printf("\nRs. 10 Notes : %d\n",((amount%100)%50)/10);
}