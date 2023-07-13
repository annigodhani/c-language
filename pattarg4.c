#include <stdio.h>
 int pattern(int n) {
    int a,k;
    char ch;
    for (a='A';a<='E';a++) {
        for (k='A';k<=a;k++) {
            printf("%c ",k);
        }
        printf("\n");
    }
}
int main() {
    int n;
    pattern(n);
    return 0;
}