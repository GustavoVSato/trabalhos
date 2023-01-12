
#include <stdio.h>
#include <math.h>
double S(int x);
int main(void){
    int x;
    scanf("%d",&x);
    printf("%lf",S(x));
    return 0;
}
double S(int x){
    if(x==0){
        return 4;
    }
    return S(x-1) + 4*(pow(-1,x)/((2*x)+1));
}
    
    



