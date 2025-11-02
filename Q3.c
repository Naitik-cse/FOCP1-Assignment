#include <stdio.h>
int main() {
    int a, b, sub;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sub = a + (~b + 1);

    printf("Subtraction is: %d\n", sub);
    return 0;
}
