#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    int i;
    float soma=0;
    for(i=0;i<x;i++){
        float v;
        scanf("%f",&v);
        if(i!=x-1){
            printf("%g %s",v," + ");
        }
        else{
            printf("%g %s",v," = ");
        }
        soma=soma+v;
    }
    printf("%g",soma);
    

    return 0;
}

