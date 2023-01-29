#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


float discriminante(float a,float b,float c);
int main(void){
    float a,b,c;
    printf("Digite os coeficientes");
    scanf("%f %f %f", &a, &b, &c);
    float *x1;
    float *x2;
    x1=(float*)malloc(1*sizeof(int));
    x1=(float*)malloc(1*sizeof(int));
    if(discriminante(a,b,c)<0){
        printf("0");
        free(x1);
        free(x2);
    }
    if(discriminante(a,b,c)==0){
        free(x2);
        printf("1 ");
        x1[0]=(b*-1)/(2*a);
        printf("%g",x1[0]);
        free(x1);
    }
    if(discriminante(a,b,c)>0){
        x1[0]=((b*-1)-sqrt(discriminante(a,b,c)))/(2*a);
        x2[0]=((b*-1)+sqrt(discriminante(a,b,c)))/(2*a);
        printf("2 %g %g",x2[0],x1[0]);
    }
    return 0;

}

float discriminante(float a,float b,float c){
    float delta;
    delta=(b*b)-(4*a*c);
    return delta;
}