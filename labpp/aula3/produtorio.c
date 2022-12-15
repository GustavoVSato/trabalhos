#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    int i;
    float produto=1;
    for(i=0;i<x;i++){
        float v;
        scanf("%f",&v);
        if(i!=x-1){
            printf("%g %s",v," * ");
        }
        else{
            printf("%g %s",v," = ");
        }
        produto=produto*v;
    }
    printf("%g",produto);
    

    return 0;
}

