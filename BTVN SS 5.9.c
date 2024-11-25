#include <stdio.h>

int main() {
    int a, b, c, menu;

    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Nhap 3 so: ");
                scanf("%d %d %d", &a, &b, &c);
                break;
            case 2:
                printf("Tong 3 so la: %d\n", a + b + c);
                break;
            case 3:
                printf("Trung binh cong 3 so la: %.2f\n", (float)(a + b + c) / 3);
                break;
            case 4:
                printf("So nho nhat la: %d\n", a < b ? (a < c ? a : c) : (b < c ? b : c));
                break;
            case 5:
                printf("So lon nhat la: %d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
                break;
            case 6:
                printf("Chuong trinh ket thuc!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (menu != 6);

    return 0;
}
