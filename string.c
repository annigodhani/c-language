#include<stdio.h>
int main() {
 char n[10],b[10];
int a,k,g=0;
 printf("enter string:"); 
 gets(n);
printf("\nyour string is:%s",n);
while(n[g]!='\0') {
g++; 
k=g-1;
}
for(a=0;a<g;a++) {
b[a]=n[k];
k--;
}
b[a]='\0';
printf("\nrevrse:%s",b);
}