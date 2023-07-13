#include<stdio.h>
int series(int a) {

   return a*a,a;
}
 int main(){
 int a,k;
 printf("Enter k:");
 scanf("%d",&k);
  for(a=1;a<k;a++) {
  if(a%2==0) {
  printf("\t%d",(a*a));
 }
  else {
  printf("\t%d",(a));
  }
 }
}