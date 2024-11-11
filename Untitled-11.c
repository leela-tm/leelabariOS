#include <stdio.h>

int main() {
    char inputType;
    printf("Enter the type of input (c for char, i for int, f for float): ");
    scanf(" %c", &inputType);

    switch (inputType) {
        case 'c': { // Character case
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);

            printf("\nCharacter: %c\n", ch);
            printf("ASCII code: %d\n", ch);
            printf("Size of character: %lu bytes\n", sizeof(ch));

            printf("Next four characters in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                char nextCh = ch + (i * 3);
                printf("Character: %c, ASCII: %d\n", nextCh, nextCh);
            }
            break;
        }
        case 'i': { // Integer case
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);

            printf("\nInteger: %d\n", num);
            printf("Size of integer: %lu bytes\n", sizeof(num));

            printf("Next four integers in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                int nextNum = num + (i * 3);
                printf("%d\n", nextNum);
            }
            break;
        }
        case 'f': { // Float case
            float num;
            printf("Enter a float: ");
            scanf("%f", &num);

            printf("\nFloat: %.2f\n", num);
            printf("Size of float: %lu bytes\n", sizeof(num));

            printf("Next four floats in multiples of 3:\n");
            for (int i = 1; i <= 4; i++) {
                float nextNum = num + (i * 3.0f);
                printf("%.2f\n", nextNum);
            }
            break;
        }
        default:
            printf("Invalid input type.\n");
            break;
    }

    return 0;
}
