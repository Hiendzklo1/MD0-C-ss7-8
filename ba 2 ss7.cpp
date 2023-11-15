#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num)
        return 1;
    else
        return 0;
}
int main() {
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (int i = 100; i <= 999; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

