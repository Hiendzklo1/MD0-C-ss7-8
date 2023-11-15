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
    int addValue, addIndex;
    printf("Nhap gia tri can chen: ");
    scanf("%d", &addValue);

    printf("Nhap chi so can chen: ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex > n) {
        printf("Chi so chen khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }
    int newNumbers[n + 1];
    for (int i = 0; i < addIndex; ++i) {
        newNumbers[i] = oldNumbers[i];
    }
    newNumbers[addIndex] = addValue;
    for (int i = addIndex; i < n; ++i) {
        newNumbers[i + 1] = oldNumbers[i];
    }
    printf("Mang sau khi chen gia tri %d tai chi so %d la:\n", addValue, addIndex);
    for (int i = 0; i < n + 1; ++i) {
        printf("newNumbers[%d]: %d\n", i, newNumbers[i]);
    }
}

