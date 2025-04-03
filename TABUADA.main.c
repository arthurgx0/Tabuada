#include <stdio.h>

int main() {

int mult = 1,tab=1,x=0,count=0;

while(count<10){
    printf("Tabuada do :%d\n",tab);
    while(x<=9){
        printf("%dx%d=%d\n",tab,mult,(tab*mult));
        mult++;
        x++;
    }
    printf("\n");
    count++;
    tab++;
    x=0;
    mult=1;
}
return 0;
}
