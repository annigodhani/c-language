#include<stdio.h>
int series(int a) {

   return a*a;
}
 int main() {
 int a,k;
  printf("Enter k:");
  scanf("%d",&k);
   for(a=1;a<k;a++) {
   printf("\t%d",(a*a));
 }
}