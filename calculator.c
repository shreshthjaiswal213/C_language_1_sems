#include<stdio.h>

int main() {
    
    int a,b;
    char ch;

    printf("Enter the operand");
    scanf(" %c",&ch);
    printf("Enter the value");
    scanf("%d",&a);
    printf("Enter the value");
    scanf("%d",&b);

    switch(ch) 
    {
        case '+':
            printf("The sum is %d",a+b);
            break;
        case '-':
            printf("The difference is %d",a-b);
            break;
        case '*':
            printf("The product is %d",a*b);
            break;
        case '/':
            printf("The quotient is %d",a/b);
            break;
        default:
            printf("Invalid operator");
    }   

    return 0;
}