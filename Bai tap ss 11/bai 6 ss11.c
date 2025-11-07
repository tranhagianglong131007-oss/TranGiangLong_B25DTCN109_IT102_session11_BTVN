#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu.\n");
        return 0;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int max1, max2;
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }
    
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max1 == max2) {
        printf("Loi: Khong co phan tu lon thu hai (tat ca phan tu bang nhau).\n");
    } else {
        printf("Phan tu lon nhat la: %d\n", max1);
        printf("Phan tu lon thu hai la: %d\n", max2);
    }

    return 0;
}

