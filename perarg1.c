#include<stdio.h>  
int perfect() {
int a=1,k=0,num;  
printf("Enter Number:");  
scanf("%d",&num);  
  while(a<num) {  
     if(num%a==0) 
     k=k+a; 
     a++;  
  }
   if(k==num) 
   printf("\n %d is Perfect Number",num); 
   else 
   printf("\n %d is not Perfect Number", num); 
   return perfect;
}
 int main() {
  printf("WelCome\n");
  perfect();
  printf("\nThankYou");
 }
     
 
