#include <stdio.h>

void findThreeLargest(int arr[], int n) {
    if (n < 3) {
        printf("Array tidak memiliki cukup elemen\n");
        return;
    }

    int first, second, third;
    first = second = third = -2147483648;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    printf("Tiga elemen terbesar: %d, %d, %d\n", first, second, third);
}

int main() {
    int n;

    printf("Masukkan ukuran array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Masukkan elemen-elemen array:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemen ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findThreeLargest(arr, n);

    return 0;
}
