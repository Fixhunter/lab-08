#include<stdio.h>

int main()
{
	int a, b, temp, *ptr;
	printf("Nhap  a or b: ");
	scanf("%d%d",&a ,&b);
	temp = b;
	ptr = &a;
	b = *ptr;
	a = temp;
	printf("Doi vi tri: %d %d",a ,b);
	return 0;
}
