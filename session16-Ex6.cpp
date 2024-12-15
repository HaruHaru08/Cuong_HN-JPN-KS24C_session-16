#include <stdio.h>

void search(int *arr, int size, int value);

int main() {
    int arr[] ={15,16,17,18,19,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;
    printf("Nhap so muon tim: ");
    scanf("%d",&value);
    search(arr, size, value);
    return 0;
}
void search(int *arr, int size, int value) {
	int location=0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
           location=i+1;
           break;
        } 
    }
    if(location>0){
    	printf("Phan tu %d duoc tim thay tai vi tri %d.\n",value,location);
	}else {
        printf("Phan tu %d khong tim thay trong mang.\n", value);
    }
}