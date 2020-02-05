#include<stdio.h>
void main()
{
    int num,a,n;
    int sum=0;

    printf("Enter 5 digits number: ");
    scanf("%d",&num);

    a=num%10;
    n=num/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    a=n%10;
    n=n/10;
    sum=sum+a;

    printf(" Sum of %d its indiviuadl digits: %d",num,sum);
}