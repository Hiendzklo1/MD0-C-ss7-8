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
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
}

