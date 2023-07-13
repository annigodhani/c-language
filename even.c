#include <stdio.h>
int main() {
    // Write C code here
 int k,n,even=0,odd=0,total=0;
 printf("enter num :");
 scanf("%d",&n);
 int a[n];
 for(k=0;k<n;k++) {
     printf("enter val :");
     scanf("%d",&a[k]);
 }
 printf("\nposition");
 for(k=0;k<n;k++) {
     printf("\n%d",a[k]);
     if(k%2==0){
         even=even+a[k];}
     if(k%2==1) {
         odd=odd+a[k];}
         total=odd+even;
 }     
 printf("\n total even val : %d",even);
 printf("\n total odd val : %d",odd);
 printf("\n total :%d",total);
}
