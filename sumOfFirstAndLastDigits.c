#include<stdio.h>
main(){
    int a, b, c;
    int sum = 0;

    printf("Enter the 4 digit number: ");
    scanf("%d",&a);

    b = a / 1000;
    sum = sum + b;

    c = a % 10;
    sum  = sum + c;
    
    printf("\n%d",sum);
}