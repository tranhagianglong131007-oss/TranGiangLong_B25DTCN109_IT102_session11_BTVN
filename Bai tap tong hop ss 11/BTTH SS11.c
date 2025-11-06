#include<stdio.h>

int main(){
	
	int arr[100];
	int i , n;
	int choice;
	int value;
	int location;
	int sum = 0;
	int newValue;
	int findNumber, flag = 0
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
	scanf("%d",&choice);
	
	switch(choice){
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
		case 7 : 
				printf("Nhap gia tri muon tim kiem :");
				scanf("%d",&findNumber);
				for(int i = 0 ; i < size ; i++){
					if(findNumber == arr[i] ){
						printf("Tim thay gia tri tai %d\n",i);
						flag = 1;
					}
				}
				if(flag == 0){
					printf("Ko tim thay gia tri");
				}
				break;
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
	

	
	
	
	
	
	
	

	
	
	
	
}

while (choice !=10);
	return 0;
}
