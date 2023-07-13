#include<stdio.h>
int main() {
 int n[4][4],a,k,total=0,total1=0,total2=0;

    for(a=0;a<3;a++) {
     for(k=0;k<3;k++) {
         printf("enter n[%d][%d]",a,k);
         scanf("%d",&n[a][k]);
 }
}
printf("\n");
 for(a=0;a<3;a++) {
  for(k=0;k<3;k++) {
    printf("\t%d",n[a][k]);
    if(a==k){
    total=total+n[a][k];}
    else if(a<k) {
    total1=total1+n[a][k];}
    else {
    total2=total2+n[a][k];}
 }
 printf("\n");
}
 printf("\nDiaognle total :%d",total);
 printf("\nupper triangle total1 :%d",total1);
 printf("\nlower triangle total2 :%d",total2);
}