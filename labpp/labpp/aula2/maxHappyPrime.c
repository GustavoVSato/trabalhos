#include <stdio.h>
int divisores(int x);
int feliz(int x);
int main(void){
    int x;
    printf("Digite um numero inteiro positivo");
    scanf("%d",&x);
    int i=x;
    while(i>=0){
        if(divisores(i)==2){
            if(feliz(i)==1){
                printf("%d",i);
                return 0;
            }
        }
        i=i-1;
    }
    printf("%s","0***");
    return 0;
}
int divisores(int x){
    int i=1;
    int d=0;
    while(i<=x){
        if(x%i==0){
            d=d+1;
        }
        i=i+1;
        if(d>2){
            return d;
        }
        
    }
    
    return d;
}
int feliz(int x){
    int i=1;
    while(i<x){
        i=i*10;
        if(i>x){
            i=i/10;
            break;
        }
        
    }
    int alg;
    int soma=0;
    while (i!=0){
        alg=x/i;
        x=x%i;
        soma=soma+(alg*alg);
        i=i/10;
        if(i%1==1){
            i=0;
        }
        
    }
    if (soma==4){
        return 3;
    }
    if (soma==1){
        return 1;
    }
    else{
        if(feliz(soma)==1){
            return 1;
        }
    }
    return 0;
}