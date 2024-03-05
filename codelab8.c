//code to perform addition
#include<stdio.h>   //standard library
int number1 = 10;   //global variable
int main()     //main function
{
    int number_one,number_two,total;       //declaration of variables
    printf("Enter first number:");
    scanf("%d",&number_one);     //storeing first number in m
    printf("Enter second number:");
    scanf("%d",&number_two);     //storeing seconf number in n
    total = m+n;        //performing the addition of m and n
    printf("Total of %d and %d is %d",number_one,number_two,total);
    return 0;
}