#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So phan tu khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }
    int oldNumbers[n];
    printf("Nhap gia tri cho cac phan tu cua mang:\n");
    for (int i = 0; i < n; ++i) {
        printf("oldNumbers[%d]: ", i);
        scanf("%d", &oldNumbers[i]);
    }
    int deleteIndex;
    printf("Nhap chi so can xoa: ");
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex >= n) {
        printf("Chi so xoa khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }
    int newNumbers[n - 1];
    for (int i = 0; i < deleteIndex; ++i) {
        newNumbers[i] = oldNumbers[i];
    }
    for (int i = deleteIndex + 1; i < n; ++i) {
        newNumbers[i - 1] = oldNumbers[i];
    }
    printf("Mang sau khi xoa phan tu tai chi so %d la:\n", deleteIndex);
    for (int i = 0; i < n - 1; ++i) {
        printf("newNumbers[%d]: %d\n", i, newNumbers[i]);
    }
}

