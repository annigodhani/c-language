#include<stdio.h>
int main() {
int a,n,x;
a=1;
x=2;
printf("enter n");
scanf("%d",&n);
while(a<=n) {
printf("%d",a*x);
a++;
}
x=x*2;
}