#include <stdio.h>
int a,k;
char ch;
int main() {
    for(ch='A';ch<='E';ch++){
    for(a=1;a<=5;a++,ch++){
    printf("\n(%c,%d)",ch,a);
    printf("\t(%c,%d)",ch,a*10);
    printf("\t(%c,%d)",ch,a*100);
    printf("\t(%c,%d)",ch,a*1000);
    }
  }
}