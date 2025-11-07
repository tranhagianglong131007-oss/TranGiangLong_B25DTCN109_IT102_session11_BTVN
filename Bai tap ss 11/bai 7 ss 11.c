#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    
    printf("Nhap so thang: ");
    scanf("%d", &n);



    printf("Nhap gia co phieu cua tung thang: \n");
    for (i = 0; i < n; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int buyPrice = arr[0];
    int profit = arr[1] - arr[0];
    int sellMonth = 2;

    for (i = 1; i < n; i++) {
        int currentProfit = arr[i] - buyPrice;
        if (currentProfit > profit) {
            profit = currentProfit;
            sellMonth = i + 1;
        }
    }

    printf("\nGia mua: %d (thang 1)\n", buyPrice);
    printf("Gia ban tot nhat: %d (thang %d)\n", arr[sellMonth - 1], sellMonth);
    
    if (profit >= 0)
        printf("Ban se lai %d.\n", profit);
    else
        printf("Ban se lo %d.\n", -profit);

    return 0;
}

