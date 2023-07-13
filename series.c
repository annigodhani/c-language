#include<stdio.h>
int main() {
int a,n;
a=1;
printf("enter n");
scanf("%d",&n);
do {
if(a%2==0) {
printf("%d",a);
}
a+a;
}while(a<=n);
a*a;
}
