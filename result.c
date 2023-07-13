#include<stdio.h>
int main() {
   
 int English[4],Hindi[4],Guj[4],Sci[4],k,t;
 float per;

  printf("\n");
  for(k=0;k<4;k++) {
   printf("enter English marks[%d]",k);
   scanf("%d",&English[k]);
}
 printf("\n");
 for(k=0;k<4;k++) {
  printf("enter Hindi marks[%d]",k);
  scanf("%d",&Hindi[k]);
}
  printf("\n");
 for(k=0;k<4;k++) {
  printf("enter Guj marks[%d]",k);
  scanf("%d",&Guj[k]);
}
  printf("\n");
 for(k=0;k<4;k++) {
  printf("enter Sci marks[%d]",k);
  scanf("%d",&Sci[k]);
}
  printf("\n");
  printf("\nEnglish\tHindi\tGuj\tSci");
  for(k=0;k<4;k++) {
  t=English[k]+Hindi[k]+Guj[k]+Sci[k];
   
  per=t*100/400;

  if(per>80) {
    printf("\tGread A");
}
 else if(per>60 && per<=70) {
   printf("\tGread B");
}
 else if(per>50 && per<=60) {
  printf("\tGread C");
}
 else if(per>35) {
  printf("\tPass");
}
 else {
  printf("\tFail");
}
 printf("\n%d\t%d\t%d\t%d",English[k],Hindi[k],Guj[k],Sci[k],t,per,gread);
}
}