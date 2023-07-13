#include<stdio.h>
struct student {
 int roll num;
 char aame[10];
 int m,s,e,t;
 float per;
};
 int main() {
 struct student k[5];
 int a;
 for(a=0;a<3;a++) {
 printf("Enter Roll No:");
 scanf("%d",&k[a].Roll No);
 printf("Enter Name:");
 scanf("%s",&k[a].Name);
 printf("Enter Maths Marks:");
 scanf("%d",&k[a].m);
 printf("Enter Sci Mark:");
 scanf("%d",&k[a].s);
 printf("Enter Englis Marks:");
 scanf("%d",&k[a].e);
}
 printf("Roll\tNamw\tMaths\tSci\tEnglish\ttotal\tper");
 for(a=0;a<3;a++) {
  k[a].t=k[a].m+k[a].s+k[a].e;
  k[a].per=(float)+k[a].t/3;
 printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%2f",k[a].Roll Num,k[a].Name,
 k[a].m,k[a].s,k[a].e)
 }
}