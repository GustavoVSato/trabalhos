#include <stdio.h> 
int main(void){
    int x;
    printf("%s","Digite um inteiro");
    scanf("%d",&x);
    int y=0;
    int soma=0;
    while(y<=x){
        soma= soma+y;
        y=y+1;
    }
    printf("%d\n",soma);
return 0;
}