#include <stdio.h>
void bi(long long unsigned x);
int main(void){
    long long unsigned x;
    printf("Digite o numero");
    scanf("%llu",&x);
    bi(x);
    return 0;
}
void bi(long long unsigned x){
    if(x!=0){
        bi(x/2);
        printf("%llu",x%2);
    }
}
