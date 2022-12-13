#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    int i=2;
    printf("%s","1");
    while(i<=x){
        if(x%i==0){
            printf("%s %d",",",i);
        }
        i=i+1;
    }
    return 0;
}