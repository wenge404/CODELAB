#include<stdio.h>
int main()
{
    float number1,number2,sum,divide,multiplication,subtraction;
    printf("enter first number");
    scanf("%f",&number1);
    printf("enter second number");
    scanf("%f",&number2);
    sum = number1 + number2;
    divide = number1 / number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    printf("%f+%f = %.2f\n",number1,number2,sum);
    printf("%f/%f = %.2f\n",number1,number2,divide);
    printf("%f*%f = %.2f\n",number1,number2,multiplication);
    printf("%f-%f = %.2f\n",number1,number2,subtraction);
    return 0;
}