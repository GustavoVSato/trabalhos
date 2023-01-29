
#include <stdio.h>;
int divisores(int x,int y);
int main(void){
    int x;
    int y;
    printf("Digite dois numeros inteiros");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d",divisores(x,y));

    return 0;
}
int divisores(int x,int y){
    if(x!=0 && y!=0){
        divisores(y,x%y);
    }
    if(x==0){
        return y;
    }
    if(y==0){
        return x;
    }
}
    
