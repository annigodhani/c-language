#include<stdio.h>
#define k 5 
 int dis(int a[],int b[]) {
  for(int i=0;i<k;i++) {
  printf("\tmaxi num%d",a[i]);
 }
}
 for(int i=0;i<k;i++) {
 printf("\tmini num%d",b[i]);
}
 int main() {
 int a[k],b[k],i;
  for(i=0;i<k;i++){
  printf("Enter val:");
  printf("\tmaxi num%d",a[i]);
  printf("\tmini num%d",b[i]);
  scanf("%d %d",&a[i],&b[i]);
} 
 dis(a,b);
}