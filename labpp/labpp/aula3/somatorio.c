#include <stdio.h>
int main(void)
{
    int x;
    printf("Digite o numero de elementos");
    scanf("%d",&x);
    int i;
    float seq[x];
    printf("Digite a sequencia");
    float soma=0;
    for(i=0;i<x;i++){
        float v;
        scanf("%f",&v);
        seq[i]=v;
        soma=soma+v;
    }
    int j=0;
    for(j=0;j<x;j++){
        if(j<x-1){
            printf("%g + ",seq[j]);
        }
        else{
            printf("%g = ",seq[j]);
        }
    }
    printf("%g",soma);
    

    return 0;
}

