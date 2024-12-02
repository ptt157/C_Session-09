#include <stdio.h>

#define MAX 100

void nhapMaTran(int a[MAX][MAX], int *n, int *m) {
    printf("Nhap so dong va cot: ");
    scanf("%d%d", n, m);
    printf("Nhap ma tran:\n");
    for (int i = 0; i < *n; i++) for (int j = 0; j < *m; j++) scanf("%d", &a[i][j]);
}

void inMaTran(int a[MAX][MAX], int n, int m) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}

void tongLe(int a[MAX][MAX], int n, int m) {
    int sum = 0;
    printf("Le: ");
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (a[i][j] % 2) {
        printf("%d ", a[i][j]);
        sum += a[i][j];
    }
    printf("\nTong le: %d\n", sum);
}

void bienVaTich(int a[MAX][MAX], int n, int m) {
    int product = 1;
    printf("Bien: ");
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
        printf("%d ", a[i][j]);
        product *= a[i][j];
    }
    printf("\nTich bien: %d\n", product);
}

void duongCheo(int a[MAX][MAX], int n, int chinh) {
    printf("%s: ", chinh ? "Cheo chinh" : "Cheo phu");
    for (int i = 0; i < n; i++) printf("%d ", chinh ? a[i][i] : a[i][n - i - 1]);
    printf("\n");
}

void dongMax(int a[MAX][MAX], int n, int m) {
    int maxSum = 0, row = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) sum += a[i][j];
        if (i == 0 || sum > maxSum) {
            maxSum = sum;
            row = i;
        }
    }
    printf("Dong max %d, tong: %d\n", row, maxSum);
}

int main() {
    int a[MAX][MAX], n, m, choice;
    do {
        printf("\n1.Nhap\n2.In\n3.Le + tong\n4.Bien + tich\n5.Cheo chinh\n6.Cheo phu\n7.Dong max\n8.Thoat\nChon: ");
        scanf("%d", &choice);
        if (choice == 1) nhapMaTran(a, &n, &m);
        else if (choice == 2) inMaTran(a, n, m);
        else if (choice == 3) tongLe(a, n, m);
        else if (choice == 4) bienVaTich(a, n, m);
        else if (choice == 5 && n == m) duongCheo(a, n, 1);
        else if (choice == 6 && n == m) duongCheo(a, n, 0);
        else if (choice == 7) dongMax(a, n, m);
        else if (choice != 8) printf("Khong hop le hoac khong phai ma tran vuong.\n");
    } while (choice != 8);
    return 0;
}

