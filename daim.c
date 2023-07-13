#include <stdio.h>
int a,n,k=30;
int main() {
    for(a=1;a<=5;a++) {
     for(n=1;n<=k;n++) {
            printf(" ");
        }
        for(n=1;n<=a;n++) {
            printf("* ");
        }
        k--;
        printf("\n");
 }
  for(a=4;a>=1;a--) {
      for(n=-1;n<=k;n++) {
          printf(" ");
      }
       for(n=1;n<=a;n++) {
            printf("* ");
  }
  k++;
  printf("\n");
  } 
}