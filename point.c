#include<stdio.h>
int main() {
int a=20,*p,**b;
p=&a;
b=&p;
 printf("value of a is:%d",a);
 printf("\nAddress of a is:%d",&a);
 printf("\nAddress of a using p is:%d",p);
 printf("\nvalue of a using p is:%d",*p);
 printf("\nAddress of p is:%d",&p);
 printf("\nvalue of a using b is:%d",**b);
 printf("\nAddress of b is:%d",&b);
}