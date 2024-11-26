#include <stdio.h>

int main() {
    int a, b, i, ucln;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);
    if (a > b) {
        int n = a;
        a = b;
        b = n;
    }
    for (i = a; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
            break;
        }
    }
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    return 0;
}
