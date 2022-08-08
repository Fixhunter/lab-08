#include <stdio.h>
#include <conio.h>
#include <string.h>
int doixung(char *ptr);
int main(){ 
   char chuoi[80];
   printf("\nNhap chuoi: ");
   gets(chuoi);
    if(doixung(chuoi)==0)
   printf("\nChuoi khong doi xung");
   else printf("\nChuoi doi xung");
   getch();
}
int doixung(char *ptr){
    int i,j;
   for(i=0,j=strlen(ptr)-1;i<strlen(ptr)/2;j--,i++)
    if(ptr[i]!=ptr[j])
      return 0;
      return 1;
}

