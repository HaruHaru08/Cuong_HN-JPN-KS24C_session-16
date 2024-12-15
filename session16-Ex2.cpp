#include <stdio.h>

void swap(int *x, int *y);
int main() {
    int x = 10;
    int y = 20;
    printf("Truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
void swap(int *x, int *y) {
    int temp =*x;
    *x = *y;
    *y = temp;
}