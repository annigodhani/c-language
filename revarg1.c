#include<stdio.h>
int reverse() {
    int a,k=0,n;
    printf("Enter the num:");
    scanf("%d",&a);    
    while(a!= 0){
         n=a%10;
         k=k*10+n;
         a=a/10;
}    
printf("The reverse num is:%d",k);
}
 int main() {
     printf("WelCome\n");
     reverse();
     printf("\nThankYou");
 }