#include <stdio.h>
  int character() {
    char ch;
    for(ch=0;ch<=24;ch+=2) {
        if(ch%4==0) {
        printf("\t%c",ch+65);
    }
    else {
        printf("\t%c",ch+97);
    }
  }
        return character;
}
 int main() {
     character();
 }