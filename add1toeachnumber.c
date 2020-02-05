#include<stdio.h>
void main(){
    int n, a, b, sum = 0;

    printf("Enter the number of 5 digits: ");
    scanf("%d",&n);

    a = n % 10;
    b = n / 10;
    sum = sum + (a + 1) * 1;

    a = b % 10;
    b = b / 10;
    sum = sum + (a + 1) * 10;

    a = b % 10;
    b = b / 10;
    sum = sum + (a + 1) * 100;

    a = b % 10;
    b = b / 10;
    sum = sum + (a + 1) * 1000;

    a = b % 10;
    sum = sum + (a + 1) * 10000;

    printf("%d",sum);
}