#include<stdio.h>
//simple calculator
/*
try
more
*/
int main()
{
    int num1, num2, value;
    char sign;
    printf(" Enter the number 1: \n");
    scanf("%d",&num1);
    printf("Enter the number 2: \n");
    scanf("%d", &num2);
    value = num1+num2;
    sign ='+';
    printf("%d %c %d =%d \n", num1, sign, num2);
    value=num1-num2;
    sign ='-';
    printf("%d %c %d = %d\n", num1, sign, num2);
    sign ='*';
    value =num1*num2;
    printf("%d %c %d =%d\n", num1, sign, num2);
    value =num1/num2;
    sign ='/';
    printf("%d %c %d =%d\n", num1, sign, num2);
    return 0;




}
