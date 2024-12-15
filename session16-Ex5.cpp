#include <stdio.h>

void change(int *arr, int newValue, int addlndex);
int main() {
	int newValue,addlndex;
    int arr[] = {3, 7, 2, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vi tri muon thay doi: ");
    scanf("%d",&addlndex);
    if(addlndex<0 || addlndex>5){
    	printf("Vi tri khong hop le");
    	return 1;
	}
    printf("Nhap so thay doi: ");
    scanf("%d",&newValue);
	change(arr, newValue, addlndex-1);
    printf("Mang sau khi cap nhat la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void change(int *arr, int newValue, int addlndex) {
    arr[addlndex] = newValue;
}
