#include <stdio.h>

int main() {
    int n;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Jumlah data harus positif. Masukkan jumlah data: ");
        scanf("%d", &n);
    }

    int data[n];

    printf("Masukkan data:\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    int sum = 0;
    double average;
    int middle;

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    average = (double)sum / n;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 0) {
        middle = (data[n / 2 - 1] + data[n / 2]) / 2;
    } else {
        middle = data[n / 2];
    }

    printf("\nHasil:\n");
    printf("Jumlah: %d\n", sum);
    printf("Rata-rata: %.2f\n", average);
    printf("Nilai Tengah: %d\n", middle);

    return 0;
}
