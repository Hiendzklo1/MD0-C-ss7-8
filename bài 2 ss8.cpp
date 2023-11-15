#include <stdio.h>
int main() {
    int row, col;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    if (row <= 0 || col <= 0) {
        printf("So hang hoac so cot khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }
    float arr[row][col];
    printf("Nhap gia tri cho cac phan tu cua mang:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }
    float sumEven = 0;
    printf("Cac phan tu co gia tri chan:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if ((int)arr[i][j] % 2 == 0) {
                printf("%.2f ", arr[i][j]);
                sumEven += arr[i][j];
            }
        }
    }
    printf("\nTong cac phan tu co gia tri chan: %.2f\n", sumEven);
}

