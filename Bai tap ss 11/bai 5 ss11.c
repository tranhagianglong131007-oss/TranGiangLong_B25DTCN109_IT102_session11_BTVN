#include <stdio.h>

int main() {
    int i, arr[100];
    int searchValue;
    int flag = -1;
    int n;

    printf("Nhap do dai cua mang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &searchValue);

    for (i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            flag = i;
            break;
        }
    }

    if (flag != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", searchValue, flag);
    } else {
        printf("Khong tim thay phan tu!\n");
    }

    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            count++;
        }
    }

    return 0;
}

