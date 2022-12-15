#include <stdio.h>
int main(void)
{
    int y;
    scanf("%d",&y);
    int num[y];
    int i;
    for(i=0;i<y;i++){
        int v;
        scanf("%d",&v);
        num[i]=v;
        
    }
    int x;
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

