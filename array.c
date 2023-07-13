#include<stdio.h>
int main() {
  int arr[5],a;
 
   for(a=0;a<5;a++) {
    printf("enter a[%d]",a);
    scanf("%d",&arr[a]);
}
  printf("\n a[%d]: %d",a,arr[a]);

}