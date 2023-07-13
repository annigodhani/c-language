#include<stdio.h>
 int main() {
int a,k;

  for(a=0;a<3;a++){
    for(k=0;k<3;k++){
      if(a==k) {
        printf("\t%d",1);
  }
     else {
       printf("\t%d",0);
  }
}
  printf("\n");
 }
} 