#include <stdio.h>
int main(){
	int a[5], *ptr;
	printf("\nNhap 5 phan tu mang: ");
	for (int i = 0; i < 5; ++i){
        printf("\nNhap a[%d] = ", i+1);
        scanf("%d", (a + i));
    }
    	ptr = &a[0];
	for (int i = 0; i < 5; ++i){
        printf("\nMang gom phan tu a[%d] la = %d", i + 1, *ptr);
        ptr++;
    }	
	return 0;
}
