/* Program to calculate gross salary after the duduction of 60% of salary*/
#include<stdio.h>
void main()
{
    float s,c;
    printf("Enter the salary: ");
    scanf("%f",&s);
    
    /*Formula to calculate gross salary*/
    c=s-(0.4*s)-(0.2*s);
    printf("Gross salary after duduction :%f",c);

}