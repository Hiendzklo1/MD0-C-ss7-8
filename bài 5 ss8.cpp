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
    int updateValue, updateIndex;
    printf("Nhap gia tri can cap nhat: ");
    scanf("%d", &updateValue);

    printf("Nhap chi so can cap nhat: ");
    scanf("%d", &updateIndex);
    if (updateIndex < 0 || updateIndex >= n) {
        printf("Chi so cap nhat khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }
    arr[updateIndex] = updateValue;
    printf("Mang sau khi cap nhat gia tri %d tai chi so %d la:\n", updateValue, updateIndex);
    for (int i = 0; i < n; ++i) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
}

