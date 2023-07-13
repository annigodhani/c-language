#include <stdio.h>
int main() {
     
int n[6][6],total;
int m[5][5],a,k;
 for(a=0;a<3;a++) 
 {
     for(k=0;k<3;k++) 
     {
         printf("enter n[%d][%d]:",a,k);
         scanf("\n%d",&n[a][k]);
     }
 }
 for(a=0;a<3;a++) 
 {
     for(k=0;k<3;k++) 
     {
         printf("enter m[%d][%d]:",a,k);
         scanf("\t%d",&m[a][k]);
     }
 }
 for(a=0;a<3;a++) 
 {
     for(k=0;k<3;k++) 
     {
         printf("%d",n[a][k]);
 }
   printf("\t");
 for(k=0;k<3;k++) 
 {
     printf("%d",m[a][k]);
      }
  printf("\t");
  for(k=0;k<3;k++) {
   printf("\t%d",n[a][k]+m[a][k]);
}
printf("\n");
 }
}