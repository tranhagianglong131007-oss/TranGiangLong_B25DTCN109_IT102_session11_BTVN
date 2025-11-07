#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;   
    int mostCount = arr[0]; 

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostCount = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostCount);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}

