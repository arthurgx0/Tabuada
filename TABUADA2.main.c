#include <stdio.h>

int main() {

int tab=1,aux;

while(tab<=10){
    printf("Tabuada do :%d\n",tab);
    aux=1;
    while(aux<=10){
        printf("%dx%d=%d\n",tab,aux,tab*aux);
        aux++;
    }
    printf("\n");
    tab++;
}
return 0;
}
