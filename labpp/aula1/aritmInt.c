#include <stdio.h>

int main(void){
    int x,y;
    printf("digite dois inteiros");
    scanf("%d %d", &x, &y);
    printf("%d %s %d %s %d\n",x,"+",y,"=",x+y);
    printf("%d %s %d %s %d\n",x,"-",y,"=",x-y);
    printf("%d %s %d %s %d\n",x,"*",y,"=",x*y);
    printf("%d %s %d %s %d\n",x,"/",y,"=",x/y);
    printf("%d %s %d %s %d\n",x," % ",y,"=",x%y);
    return 0;
}