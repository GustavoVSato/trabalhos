
#include <stdio.h>

int main()
{
    int x;
    printf("Digite o numero de elementos");
    scanf("%d",&x);
    int i;
    int vetor[x];
    printf("Digite os numeros");
    for(i=0;i<x;i++){
        int v;
        scanf("%d",&v);
        vetor[i]=v;
    }
    int j;
    int soma=0;
    for(j=0;j<x;j++){
        if(vetor[j]>0){
            soma++;
        }
    }
    int vetorp[soma];
    int k=0;
    for(j=0;j<x;j++){
        if (vetor[j]>0){
            vetorp[k]=vetor[j];
            k++;
        }
    }
    if(soma==0){
        printf("%s","vazio");
    }
    else{
        for(j=0;j<soma;j++){
            if(j<soma-1){
                printf("%d%s ",vetorp[j],",");
            }
            else{
                printf("%d",vetorp[j]);
            }
    }
    }

    return 0;
}
