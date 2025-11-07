#include<stdio.h>

int main(){
	
	int arr[100];
	int i , n;
	int choise;
	int value;
	int location;
	int sum = 0;
	int newValue;
	int findNumber;
	do{
	
	printf("\n------------------Quan li danh sach so nguyen----------------\n");
	printf("1. Nhap so phan tu va gia tri cho mang \n");
	printf("2. Hien thi so mang \n");
	printf("3. Tinh tong cac phan tu trong mang \n");
	printf("4. Them phan tu bat ky- Nhap vi tri muon them \n");
	printf("5. Xoa phan tu o vi tri bat ky- Nhap vi tri muon xoa \n");
	printf("6. Cap nhap gia tri tai vi tri bat ky- Nhap vi tri muon cap nhat\n");
	printf("7. Tim kiem phan tu trong mang \n");
	printf("8. Sap xep mang \n");
	printf("9. Tinh hieu cua so lon nhat va so nho nhat trong mang \n");
	printf("10.Thoat chuong trinh \n");
	printf("Moi ban nhap lua chon cua minh: ");
	scanf("%d",&choise);
	
	switch(choise){
		case 1:
			printf("Nhap vao do dai mang: ");
			scanf("%d",&n);
			printf("Nhap gia tri cua mang :\n");
			for ( i = 0 ; i < n ; i++){	
			printf("arr[%d] = ",i);
			scanf("%d",&arr[i]);
		}
		break;	
		case 2:
			printf("Mang hien tai la : ");
			for (i =0 ; i < n ; i++){
			printf("%d ",arr[i]);
			
		}break;
		case 3:
            for (i = 0; i < n; i++) {
                  sum += arr[i];
                }
            printf("Tong cac phan tu co trong mang la: %d\n", sum);
            break;
            
           
		case 4:
			
			printf("Nhap vi tri muon them (0 -> %d): ",n);
			scanf("%d",&location);
			
			printf("Nhap gia tri muon them moi : ");
			scanf("%d",&value);
			for ( i = n ; i > location; i--){
				arr[i] = arr[i - 1];
			}
			arr[location] = value;
			n++;
			printf("Da them thanh cong");
			break;
		case 5 :
			printf("Nhap vi tri muon xoa (0 -> %d): ",n-1);
			scanf("%d",&location);
			for ( i = n ; i < location; i--){
				arr[i] = arr[i + 1];
			}
			n--;
			printf("Da xoa thanh cong");
			break;
		case 6:
			printf("Nhap vi tri muon cap nhat (0 -> %d) : ",n-1);
			scanf("%d",&location);
			printf("Nhap gia tri muon cap nhat: ");
			scanf("%d",&newValue);
			
			arr[location]= arr[newValue];
			printf("Da cap nhat thanh cong ");
			break;
		case 7 : {
				char select ;
				printf("a. Tim kiem theo linear search \n");
				printf("b. Tim kiem theo binary search \n");
				
				getchar();
				printf("Enter lua chon : ");
				scanf("%c",&select);
				
				int value , found = -1  ;
				printf("Enter value want search : ");
				scanf("%d",&value);
				
				if(select == 'a' || select == 'A'){
					for(int j = 0 ; j < n  ;j++){
						if(arr[j] == value){
							found = j ;
							break;
						}
					}
				}else {
					int top = 0 ,mid ,bot = n ;
					while(top <= bot){
						mid = (top + bot) / 2 ;
						if(arr[mid] == value){
							found = mid ;
							break;
						}else if(value > arr[mid]){
							top = mid + 1 ;
						}else {
							bot = mid - 1;
						}
					}
				}
				
				if(found == -1){
					printf("Khong tim thay");
				}else {
					printf("Tim thay %d tai vi tri %d ",value,found);
				}
				break;
			}
			case 8 : {
				char select ;
				printf("a. sap xep theo bubble sort\n");
				printf("b. sap xep theo selection sort\n");
				getchar();
				printf("Lua chon cua ban la : ");
				scanf("%c",&select);
				
				if(select == 'a' || select == 'A'){
					for(int j = 0 ; j < n - 1 ;j++){
						for(int m = 0 ; m < n - 1 - j ; m++){
							if(arr[m] > arr[m+1]){
								int tmp = arr[m];
								arr[m] = arr[m+1];
								arr[m+1] = tmp;
							}
						}
					}
					
				}else {
					for( int j = 0 ; j < n -1 ; j++ ){
						for(int m = j+1 ; m < n ; m++ ){
							if(arr[j] > arr[m]){
								int tmp = arr[j];
								arr[j] = arr[m];
								arr[m] = tmp ;
							}
						}
					}
				}
				
				printf("Mang sau khi sap xep la : ");
				for(int j = 0 ; j < n ; j++){
					printf("%d ",arr[j]);
				}
				break;
			}
            default:
                printf ("lua chon khong hop le!\n");
        }
	}
	while (choise!=10); 
    return 0;
}
