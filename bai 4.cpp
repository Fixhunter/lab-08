#include<stdio.h>
int main(){
	int a[5], b[5], c[5], *ptr;
	ptr = &c[0];
	int i;
	for( i = 0;i < 5; ++i){
		printf("\nNhap gia tri thu %d mang A: ",i+1);
		scanf("%d",(a+i));
	}
	printf("\n-------------------------");
	for( i = 0;i < 5;++i){
		printf("\nNhap gia tri thu &d mang B: ", i+1);
		scanf("%d", (b+i));
	}
	printf("\n-------------------------");
	for( i = 0;i < 5;++i){
		ptr[i]=a[i]+b[i];
		printf("\nGia tri thu %d mang A: %d",i+1,*(a+i));
		printf("\nGia tri thu %d mang B: %d",i+1,*(b+i));
		printf("\nGia tri thu %d mang C = A + B %d",i+1,*(ptr+i));
	}
	return 0;
}
