#include <stdio.h>
int main(void){
    int x;
    printf("digite um inteiro");
    scanf("%d",&x);
    int y=1;
    int fatorial=1;
    while(y<=x){
        fatorial= fatorial*y;
        y=y+1;
    }
    printf("%d %s %d\n",x,"! =",fatorial);
return 0;   

}