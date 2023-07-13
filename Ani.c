#include<stdio.h>
void main() {

  char str[10];
  int a,k,i;
   
  printf("enter name :");
  scanf("%[^\n]s",&str);

  for(a=0;str[a]!='\0';a++);
   printf("len=%d\n",a);
   i=a;
 for(k=0;k<(a/2);k++) {
 printf("%c%c",str[k],str[--i]);
}
 if(a%2!=0) {
  printf("%c",str[(a/2)]);
 }
} 