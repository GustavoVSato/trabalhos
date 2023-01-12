#include <stdio.h>
int main(void)
{
    int y;
    printf("Digite o numero de elementos");
    scanf("%d",&y);
    int num[y];
    int i;
    printf("Digite a sequencia");
    for(i=0;i<y;i++){
        int v;
        scanf("%d",&v);
        num[i]=v;
        
    }
    int x;
    printf("Digite a referencia");
    scanf("%d",&x);
    for(i=0;i<y;i++){
        printf("%d",num[i]);
        if(x%num[i]==0){
            printf("%s","#");
        }
        printf("%s"," ");
        
    }
    

    return 0;
}

