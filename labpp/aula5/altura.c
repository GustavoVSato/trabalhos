
#include <stdio.h>;
typedef
    struct altura{
        int m,cm;
    }
altura;
int co(int x);
int main(void){
    altura alt;
    printf("Escreva a altura");
    scanf("%d.%d",&alt.m,&alt.cm);
    alt.cm=co(alt.cm);
    printf("Altura %dm%d",alt.m,alt.cm);
    return 0;
}
int co(int x) {
    if(x < 10) return x*10;
    if(x > 99) return co(x/10);
    return x;
}

