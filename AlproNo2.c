#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x, int *steps) {
    while (low <= high) {
        (*steps)++; 

        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int n, i, cari;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    printf("Masukkan nilai mahasiswa (urutkan):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("Masukkan nilai yang dicari: ");
    scanf("%d", &cari);

    int steps = 0;

    int result = binarySearch(data, 0, n - 1, cari, &steps);

    if (result != -1) {
        printf("Nilai %d ditemukan pada indeks %d.\n", cari, result);
        printf("Jumlah langkah yang diperlukan: %d\n", steps);
    } else {
        printf("Nilai %d tidak ditemukan dalam data.\n", cari);
    }

    return 0;
}
