#include <stdio.h>
 int pattern(int n) {
    int a,k;
    char ch;
    for (a=1;a<=5;a++) {
        for (k=1;k<=5;k++) {
            printf("");
        }
        for(k=1;k<=a;k++) {
            printf("* ");
        }
        printf("\n");
      }
   }  
int main() {
    int n;
    pattern(n);
    return 0;
}