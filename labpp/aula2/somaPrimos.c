#include <stdio.h>
int divisores(int x);
int main(void)
{
    int x;
    int y;
    int soma=0;
    printf("%s","Digite o intervalo");
    scanf("%d",&x);
    scanf("%d",&y);
    while(x<=y){
        if(divisores(x)==2){
            soma=soma+x;
        }
        x=x+1;
    }
    printf("%d",soma);
    return 0;
}
int divisores(int x){
    int i=1;
    int d=0;
    while(i<=x){
        if(x%i==0){
            d=d+1;
        }
        i=i+1;
    }
    
    return d;
}