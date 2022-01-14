/*Program to make a mini Calculator using functions in C(Procedural Programming)*/

#include<stdio.h>
float calculator(float a, float b)
{
    printf("Press 1 for Addition");
    printf("\nPress 2 for Subtraction");
    printf("\nPress 3 for Multiplication");
    printf("\nPress 4 for Division\n");
    int n;
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        return a+b;
        break;
        case 2:
        return a-b;
        break;
        case 3:
        return a*b;
        break;
        case 4:
        return a/b;
        break;
    }
}

int main()
{
    float num1, num2;
    printf("Enter Number 1: ");
    scanf("%f", &num1);
    printf("Enter Number 2: ");
    scanf("%f", &num2);
    printf("The result of %.2f and %.2f is: %.2f", num1,num2,calculator(num1,num2));
    return 0;
}