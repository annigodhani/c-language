#include<stdio.h>
int product() {
int a,n,k;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter n:");
  scanf("%d",&n);
  k=a*n;
  printf("product a and n:%d",k);
} 
 int main() {
  printf("Hallo\n");
  product();
}