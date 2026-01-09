#include <stdio.h>
#include <math.h>   

int main() {
    int choice;
    double num1, num2;

    do {
        printf("\n List of Operations you can perform in this calculator \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (a^b)\n");
        printf("6. Modulus\n");
        printf("7. Square Root\n");
        printf("8. Square\n");
        printf("9. Cube\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", num1 + num2);
                break;

            case 2:
                //Substraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", num1 - num2);
                break;

            case 3:
                // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", num1 * num2);
                break;

            case 4:
                // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    printf("Result = %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero not allowed.\n");
                break;

            case 5:
                // Power operation
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %.2lf\n", pow(num1, num2));
                break;

            case 6:
                // Modulus (works only with integers)
                {
                    int a, b;
                    printf("Enter two integers: ");
                    scanf("%d %d", &a, &b);
                    if (b != 0)
                        printf("Result = %d\n", a % b);
                    else
                        printf("Error: Modulus by zero not allowed.\n");
                }
                break;

            case 7:
                // Square root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0)
                    printf("Result = %.2lf\n", sqrt(num1));
                else
                    printf("Error: Square root of negative number.\n");
                break;

            case 8:
                // Square
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", num1 * num1);
                break;

            case 9:
                // Cube
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result = %.2lf\n", num1 * num1 * num1);
                break;

            case 10:
                // Exiting
                printf("Exiting calculator!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 10);

    return 0;
}