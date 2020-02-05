/*If a five-digit number is input throght the keyboard, write a program to reverse the number*/
#include<stdio.h>
void main()
{
    int num,a,n;
    int revnum=0;/*Initilised if not it will contain garbaje value*/

    printf("Enter a 5 digits number: ");
    scanf("%d",&num);

    a=num%10; /*Last digit*/
    n=num/10; /*Remaining Digits*/
    revnum=revnum+a*10000;

    a=n%10;/*4th digits*/
    n=n/10;
    revnum=revnum+a*1000;

    a=n%10;
    n=n/10;
    revnum=revnum+a*100;

    a=n%10;
    n=n/10;
    revnum=revnum+a*10;

    a=n%10;
    revnum=revnum+a;

    printf("Reverse of %d is: %d",num,revnum);

}