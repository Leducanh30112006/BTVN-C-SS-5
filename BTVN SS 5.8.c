#include <stdio.h>

int main() {
    int a, b, i, bcnn;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (i = b; ; i += b) { // B?t d?u t? b và tang d?n theo b
        if (i % a == 0) {
            bcnn = i;
            break;
        }
    }
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);
    return 0;
}
