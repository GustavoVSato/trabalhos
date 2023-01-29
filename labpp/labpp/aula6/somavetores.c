#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool soma(int * v1, int x, int * v2, int y, int * v3);
int main(void){
    int x,y;
    printf("Digite do vetor");
    scanf("%d",&x);
    printf("Digite do vetor");
    scanf("%d",&y);
    int *v1;
    int *v2;
    int *v3;
    v1=(int*)malloc(x*sizeof(int));
    v2=(int*)malloc(y*sizeof(int));
    v3=(int*)malloc(y*sizeof(int));
    int i,j;
    for(i=0;i<x;i++){
        v1[i]=1+(i*2);
    }
    for(j=0;j<y;j++){
        v2[j]=4*j;
    }
    if(soma(v1,x,v2,y,v3)==true){
        int k;
        printf("%d",v3[0]);
        for(k=1;k<x;k++){
            printf(", %d",v3[k]);
        }
    }
    else{
        printf("mensagem que não pode somar vetores");
    }
    free(v1);
    free(v2);
    free(v3);
    return 0;
}
bool soma(int * v1, int x, int * v2, int y, int * v3){
    if(x!=y){
        return false;
    }
    else{
        int i;
        for(i=0;i<x;i++){
            
            v3[i]=v1[i]+v2[i];
            
        }
        return true;
    }
}
