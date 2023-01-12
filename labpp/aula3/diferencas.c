
#include <stdio.h>

int main()
{
    int x;
    printf("Digite o numero de elementos");
    scanf("%d",&x);
    int i;
    double vetor[x];
    double vetor2[x-1];
    printf("Digite os numeros");
    for(i=0;i<x;i++){
        double v;
        scanf("%lf",&v);
        vetor[i]=v;
    }
    int j;
    for(j=0;j<x-1;j++){
        vetor2[j]=vetor[j+1]-vetor[j];
    }
    double me=0.0;
    double ma=0.0;
    for(j=0;j<x-1;j++){
        if(me>=vetor2[j]){
            me=vetor2[j];
        }
        if(ma<=vetor2[j]){
            ma=vetor2[j];
        }
        if(j<x-2){
            printf("%g%s ",vetor2[j],",");
        }
        else{
            printf("%g\n",vetor[j]);
        }
    }
    printf("%g %g",me,ma);
    
    return 0;
}
