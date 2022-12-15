#include <stdio.h>
#include <math.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    float media;
    float desvio;
    int i;
    float num[x];
    for(i=0;i<x;i++){
        float v;
        scanf("%f",&v);
        num[i]=v;
        media=media+v/x;
    }
    for(i=0;i<x;i++){
        desvio=desvio+(pow((num[i]-media),2));
    }
    desvio=pow(desvio/x,0.5);
    printf("%s %g %s %g","media ",media,", desvio",desvio);

    return 0;
}

