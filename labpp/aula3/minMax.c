#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        num[i]=v;
    }
    int Me=num[0];
    int Ma=0;
    int a;
    for(a=0;a<n;a++){
        if(Ma<=num[a]){
            Ma=num[a];
        }
    }
    int b;
    for(b=0;b<n;b++){
        if(Me>=num[b]){
            Me=num[b];
        }
    }
    int k;
    for(k=0;k<n;k++){
        printf("%d",num[k]);
        if(num[k]==Me){
            printf("%s","<");
        }
        if(num[k]==Ma){
            printf("%s",">");
        }
        printf("%s"," ");
    }
    
    

    return 0;
}
