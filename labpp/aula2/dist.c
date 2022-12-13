#include <stdio.h>
#include <math.h>
int main(void){
    float xa;
    float ya;
    float xb;
    float yb;
    scanf("%f",&xa);
    scanf("%f",&ya);
    scanf("%f",&xb);
    scanf("%f",&yb);
    float d;
    d=sqrt(pow((xa-xb),2)+pow((ya-yb),2));
    printf("%g",d);
return 0;
}