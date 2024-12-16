#include <stdio.h>

void arrchange(int *arr, int giatri, int vitri) {
    if (vitri < 0 || vitri >= 5) {
        printf("Vi tri khong hop le.\n");
    }
    *(arr + vitri) = giatri;
}
int main() {
    int arr[5] = {5, 4, 3, 7, 1};
    int giatri;
    int vitri;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    printf("Nhap gia tri: ");
    scanf("%d", &giatri);
    printf("Nhap vi tri muon thay doi (0-4): ");
    scanf("%d", &vitri);/
    arrchange(arr, giatri, vitri);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    return 0;
}
