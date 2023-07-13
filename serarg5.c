#include <stdio.h>
  int seri() {
   int  a,k,n=1,l=1,m;
    printf("Enter k:");
    scanf("%d",&k);
    printf("\t%d",n);
    printf("\t%d",l);
    for(a=1;a<=k;a++) {
        m=n+l;
        printf("\t%d",m);
        n=l;
        l=m;
    }
        return m;
}
 int main() {
     seri();
 }