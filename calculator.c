#include <stdio.h>

int add(int i, int j) {
    return (i + j);
}

int subtract(int i, int j) {
    return (i - j);
}

int multiply(int i, int j) {
    return (i * j);
}

float divide(int i, int j) {
    if (j == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 to indicate an error.
    }
    return ((float) i / j);  // Explicit type casting to float for decimal results.
}
// Assuming there are relevant includes and main function

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}
double inverse(double num) {
    if (num == 0) {
        printf("Error: Division by zero\n");
        return 0; // Or handle error appropriately
    }
    return 1.0 / num;
}

int main() {
    int a, b;
    char operation;
    char confirm = 'n';

    do {
        printf("\nChoose an operation (+, -, *, /, ^, #, i):\n");
        printf("+: Addition\n");
        printf("-: Subtraction\n");
        printf("*: Multiplication\n");
        printf("/: Division\n");
        printf("^: Square of a number\n");
        printf("#: Cube of a number\n");
        printf("i: Inverse of a number\n");
        
        printf("Enter operation: ");
        scanf(" %c", &operation);

        switch (operation) {
            case '+':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d + %d is %d\n", a, b, add(a, b));
                break;
            case '-':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d - %d is %d\n", a, b, subtract(a, b));
                break;
            case '*':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d * %d is %d\n", a, b, multiply(a, b));
                break;
            case '/':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                if (b != 0) {
                    printf("The result of %d / %d is %.2f\n", a, b, divide(a, b));
                }
                break;
	    case '^':
		printf("enter an integer:");
		scanf("%d",a);
		printf("square of %d is %d \n",a,square(a));
        	break;
	    case '#':
		printf("enter an integer:");
		scanf("%d",&a);
		printf("The cube of %d is %d \n",a,cube(a));
		break;
	    case 'i':
	    printf("enter an integer:");
	    scanf("%d",&a);
	    printf("inverse of %f is %f\n",a,inverse(a);
	    break;
              default:
                printf("Invalid operation. Please try again.\n");
        }

        printf("Do you want to perform another operation [y/N]? ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');

    return 0;
}