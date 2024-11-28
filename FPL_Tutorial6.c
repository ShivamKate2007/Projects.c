#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}