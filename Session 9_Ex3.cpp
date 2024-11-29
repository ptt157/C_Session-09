#include <stdio.h>

int main() {
    int arr[100], n, currentLength, pos;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    currentLength = n;
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Nhap vi tri can xoa (0 - %d): ", currentLength - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= currentLength) {
        printf("Vi tri xoa khong hop le!\n");
        return 1;
    }

    for (int i = pos; i < currentLength - 1; i++) arr[i] = arr[i + 1];
    currentLength--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

