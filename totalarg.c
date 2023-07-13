#include<stdio.h>
 int total(int a) {
 
     return a;
}
 int main() {
   int a,total;
  for(a=1;a<=10;a++) {
  total=total+a;
  printf("\n%d",a);
}
 printf("\ntotal:%d",(total));
 }