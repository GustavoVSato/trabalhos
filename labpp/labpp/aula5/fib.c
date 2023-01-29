
#include <stdio.h>;
int fib(int x);
int main(void){
    int x;
    printf("Informe o indice da sequencia");
    scanf("%d", &x);
    printf("%d",fib(x));
    return 0;
}
int fib(int x){
    if (x==0){
        return x;
    }
    if (x==1||x==2){
        return 1;
    }
    return fib(x-1)+fib(x-2);
}
    
