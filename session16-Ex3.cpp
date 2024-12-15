#include <stdio.h>

void calculateSum(int a, int b, int *result);
int main() {
    int x = 5;
    int y = 15;
    int sum = 0;
    calculateSum(x, y, &sum);
    printf("Tong cua hai so la: %d\n",sum);
    return 0;
}
void calculateSum(int x, int y, int *result) {
    *result = x + y;
}