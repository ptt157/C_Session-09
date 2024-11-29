#include <stdio.h>

int main() {
    int arr[100], n, value, idx;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Nhap gia tri va vi tri them: ");
    scanf("%d %d", &value, &idx);

    for (int i = n; i > idx; i--) arr[i] = arr[i - 1];
    arr[idx] = value;

    for (int i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}

