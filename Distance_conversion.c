#include<stdio.h>
void main()
{
    float m,a,b,c,d;
    printf("Enter the distance in km: ");
    scanf("%f",&m);

    a=m*1000;
    b=m*3280.84;
    c=m*39370.079;
    d=m*100000;

    printf("\nIn Meters : %f \n In Feet : %f \n In Inches : %f \n In Centi = %f",a,b,c,d);
}