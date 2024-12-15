#include <stdio.h>

void printArray(int *arr, int size);
int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d]= %d\n", i, *(arr + i));
    }
}