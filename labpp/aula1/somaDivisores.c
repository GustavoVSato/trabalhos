#include <stdio.h>

int main()
{
    int n;
    printf("%s","Digite um inteiro");
    scanf("%d",&n);
    int i=1;
    int soma=0;
    while(i<=n){
        if(n%i==0){
            soma=soma+i;
        }
        i=i+1;
        
    }
    printf("%d\n",soma);
    

    return 0;
}
