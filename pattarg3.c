#include <stdio.h>
 int pattern(int n) {
    int a,k,l=1;
    for (a=1;a<=5;a++) {
        for (k=1;k<=a;k++) {
            printf("%d ",l++);
        }
        printf("\n");
    }
}
int main() {
    int n;
    pattern(n);
    return 0;
}