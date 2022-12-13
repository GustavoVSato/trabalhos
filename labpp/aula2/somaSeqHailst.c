#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    int soma=x;
    while(x!=1){
        if(x%2==1){
            x=(3*x)+1;
        }
        else{
            x=x/2;
        }
        soma=soma+x;
    }
    printf("%d",soma);
    return 0;
}