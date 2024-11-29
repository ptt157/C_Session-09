#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx, value;

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\nNhap vi tri can sua va gia tri moi: ");
    scanf("%d %d", &idx, &value);

    if (idx >= 0 && idx < n) arr[idx] = value;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

