#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
    return 1;
}

void menu() {
    printf("\nMENU\n");
    printf("1. Nhap mang\n2. In mang\n3. Chan + tong\n4. Max, Min\n");
    printf("5. So nguyen to + tong\n6. Thong ke so\n7. Them phan tu\n8. Thoat\n");
    printf("Chon: ");
}

int main() {
    int a[100], n = 0, choice;
    do {
        menu();
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Nhap so phan tu: "); scanf("%d", &n);
            printf("Nhap mang: "); for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        } else if (choice == 2) {
            printf("Mang: "); for (int i = 0; i < n; i++) printf("%d ", a[i]); printf("\n");
        } else if (choice == 3) {
            int sum = 0;
            printf("Chan: "); for (int i = 0; i < n; i++) if (a[i] % 2 == 0) { printf("%d ", a[i]); sum += a[i]; }
            printf("\nTong chan: %d\n", sum);
        } else if (choice == 4) {
            int max = a[0], min = a[0];
            for (int i = 1; i < n; i++) {
                if (a[i] > max) max = a[i];
                if (a[i] < min) min = a[i];
            }
            printf("Max: %d, Min: %d\n", max, min);
        } else if (choice == 5) {
            int sum = 0;
            printf("Nguyen to: "); for (int i = 0; i < n; i++) if (isPrime(a[i])) { printf("%d ", a[i]); sum += a[i]; }
            printf("\nTong nguyen to: %d\n", sum);
        } else if (choice == 6) {
            int x, count = 0;
            printf("Nhap so can thong ke: "); scanf("%d", &x);
            for (int i = 0; i < n; i++) if (a[i] == x) count++;
            printf("So lan xuat hien: %d\n", count);
        } else if (choice == 7) {
            int pos, val;
            printf("Nhap vi tri va gia tri: "); scanf("%d %d", &pos, &val);
            if (pos < 0 || pos > n) printf("Vi tri khong hop le\n");
            else {
                for (int i = n; i > pos; i--) a[i] = a[i-1];
                a[pos] = val; n++;
            }
        } else if (choice != 8) printf("Lua chon khong hop le\n");
    } while (choice != 8);
    return 0;
}

