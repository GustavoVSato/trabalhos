#include <stdio.h>

int main(void){
    int x;
    int y;
    printf("%s","Digite 2 numeros do intervalo");
    scanf("%d",&x);
    scanf("%d",&y);
    int i=x+1;
    if(x%2==0){
        printf("%d",x+1);
        i=i+1;
    }
    if(x%2==1){
        printf("%d",x);
    }
    while(i<=y){
        if(i%2==1){
            printf("%s %d",",",i);
        }
        i=i+1;
    }
    return 0;
}