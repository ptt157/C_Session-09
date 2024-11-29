#include <stdio.h>
#define MAX 100

void nhap(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) scanf("%d", &arr[i]);
}

void hien(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void them(int arr[], int *n) {
    int pos, val;
    printf("Vi tri (0 - %d): ", *n);
    scanf("%d", &pos);
    printf("Gia tri: ");
    scanf("%d", &val);
    for (int i = (*n)++; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
}

void sua(int arr[], int n) {
    int pos, val;
    printf("Vi tri (0 - %d): ", n - 1);
    scanf("%d", &pos);
    printf("Gia tri moi: ");
    scanf("%d", &val);
    arr[pos] = val;
}

void xoa(int arr[], int *n) {
    int pos;
    printf("Vi tri (0 - %d): ", *n - 1);
    scanf("%d", &pos);
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int arr[MAX], n = 0, ch;
    do {
        printf("\n1.Nhap 2.Hien 3.Them 4.Sua 5.Xoa 6.Thoat\nChon: ");
        scanf("%d", &ch);
        if (ch == 1) nhap(arr, &n);
        else if (ch == 2) hien(arr, n);
        else if (ch == 3) them(arr, &n);
        else if (ch == 4) sua(arr, n);
        else if (ch == 5) xoa(arr, &n);
    } while (ch != 6);
    return 0;
}

