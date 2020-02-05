/* Program to calculate aggregate marks and percentage of 5 subjects*/
#include<stdio.h>

void main()
{
    int a,b,c,d,e,agg;
    float per;

    printf("\nEnter the Marks obtained in 5 subject: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    /* To Add the marks and calculate the percentage*/
    agg=a+b+c+d+e;
    per=((agg)/5);

    /*Print the final outout*/
    printf("\nAggregate:  %d ",agg);
    printf("\nPercentage:   %f",per);
}