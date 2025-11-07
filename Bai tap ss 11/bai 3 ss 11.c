#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1, mid;
    int x; 
    int found = -1;
    int i;
	printf ("Cac phan tu co trong mang la: \n");
	for(i = 0 ; i < n; i++){
		printf ("arr[%d] = %d \n",i,arr[i]);
	}
    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &x);

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        printf("Phan tu %d duoc tim thay tai chi so %d\n", x, found);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }

    return 0;
}

