#include<stdio.h>
#include<stdlib.h>
int isprime(int n){
	int flag = 1;
	if (n < 2) return flag = 0;
	int i = 2;
	while(i < n){
		if(n%i==0){
			flag = 0;
			break;
		}
		++i;
	}
	return flag;
}
int main(){
	int i,n,check;
	int *ptr;
	printf("\nNhap so phan tu mang: ");
	scanf("%d",&n);
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("\nKhong du bo nho cho ban!!");
		exit(0);
	}		
	printf("\nNhap vao %d phan tu: ",n);
	for(i=0;i<n;++i){
		scanf("%d",(ptr+i));
	}
	printf("\nMang gom: ");
	for(i=0;i<n;++i){
		printf("%D ",*(ptr+i));
	}
	for(i=0;i<n;++i){
		check = isprime(i);
		if(check == 1)
		printf("/nSo nguyen to la: %d ", *(ptr+i));
	}
	free(ptr);
	return 0;
}
