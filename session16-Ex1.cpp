#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    printf("Dia chi cua x (truc tiep): %d\n",&x);
    printf("Dia chi cua x (qua con tro): %d\n",ptr);
    printf("Gia tri cua x (truc tiep): %d\n", x);
    printf("Gia tri cua x (qua con tro): %d\n", *ptr);
    return 0;
}
