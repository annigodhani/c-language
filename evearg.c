#include<stdio.h>
 int total(int a) {
 
     return a;
}
 int main() {
   int a,total=0;
  for(a=2;a<=10;a+=2) {
  total=total+a;
  printf("\n%d",a);
}
 printf("\ntotal:%d",(total));
 }
