#include<stdio.h>
int main(){
    int n1, n2;
    char operator;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &n1, &n2, &operator);
    switch(operator) {
        case '+':
            printf("Result: %d\n", n1 + n2);
            break;
        case '-':
            printf("Result: %d\n", n1 - n2);
            break;
        case '*':
            printf("Result: %d\n", n1 * n2);
            break;
        case '/':
            if(n2 != 0) {
                printf("Result: %.2f\n", (float)n1 / n2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
}