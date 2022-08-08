#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[80];
	scanf("%s",chuoi);
	int n;
	printf("\nNhap chuoi: ");
	gets(chuoi);
	n = strlen(chuoi);
	printf("\nDo dai cua chuoi: %d", n);
	return 0;
}
