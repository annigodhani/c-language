#include<stdio.h>
 int total() {
   int a,total=0;
  for(a=1;a<=10;a++) {
  total=total+a;
  printf("\n%d",a);
}
  printf("\nYour Total is:%d",total);
  return total;
}
 int main() {
   total();
}
