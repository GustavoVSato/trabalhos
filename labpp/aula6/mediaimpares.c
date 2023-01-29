#include <stdio.h>
#include <stdlib.h>
double media(int*num,int n);
int main(void){
    printf("Digite um numero de elementos:");
    int n;
    scanf("%d",&n);
    printf("Digite um numero inicial:");
    int N;
    scanf("%d",&N);
    int *seq;
    seq=(int*)malloc(n*sizeof(int));
    if(N%2==0){
        N--;
    }
    int i;
    for(i=0;i<n;i++){
        seq[i]=N+(2*i);
    }
    printf("%d ",seq[n-2]);
    media(seq,n);
    free(seq);
    return 0;
}
double media(int*seq,int n){
    int i;
    double soma=0;
    for(i=0;i<n;i++){
        soma=soma+seq[i];
    }
    printf("%lg",soma/n);
}

