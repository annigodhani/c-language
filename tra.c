#include<stdio.h>
int main() {
 int n[4][4],a,k;
  
    for(a=0;a<3;a++) {
     for(k=0;k<3;k++) {
      printf("enter n[%d][%d]:",a,k);
      scanf("%d",&n[k][a]);
 }
}
 printf("\n");
 for(a=0;a<3;a++) {
  for(k=0;k<3;k++) {
   printf("\t%d",n[a][k]);
 }
 printf("\n");
 }
}
