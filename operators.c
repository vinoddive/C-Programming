#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d", &b);

    c=a+b;
    printf("Addition of two numbers :-- %d \n", c);

    c=a-b;
    printf("Substraction of two numbers :-- %d \n", c);

    c=a*b;
    printf("Multiplication of two numbers :-- %d \n", c);

    c=a/b;
    printf("Division of two numbers :-- %d \n", c);
    
}