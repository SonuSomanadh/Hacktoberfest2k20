#include <stdio.h>

int main() {

    char operator;

    int first, second;

    printf("Enter an operator: ");

    scanf("%c", &operator);

    printf("Enter two operands: ");

    scanf("%d,%d", &first, &second);

    switch (operator) {

    case '+':

        printf("\n%d+ %d = %d", first, second, first + second);

        break;

    case '-':

        printf("\n%d- %d= %d", first, second, first - second);

        break;

    case '*':

        printf("\n%d * %d= %d", first, second, first * second);

        break;

    case '/':

        printf("\n%d/ %d = %.1lf", first, second, first / second);

        break;

    default:

        printf("\nINVALID OPERATOR!");

    }

    return 0;

}
