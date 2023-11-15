#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So phan tu khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }
    int arr[n];
    printf("Nhap gia tri cho cac phan tu cua mang:\n");
    for (int i = 0; i < n; ++i) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int findNumber;
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &findNumber);
    int sum = 0;
    printf("Chi so cac phan tu co gia tri bang %d la:\n", findNumber);
    for (int i = 0; i < n; ++i) {
        if (arr[i] == findNumber) {
            printf("%d ", i);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu co gia tri bang %d: %d\n", findNumber, sum);
}

