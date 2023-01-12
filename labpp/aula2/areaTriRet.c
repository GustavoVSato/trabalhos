#include <stdio.h>
#include <math.h>
float dist(float xa,float ya,float xb,float yb);

int main(void){
    float xa;
    float ya;
    float xb;
    float yb;
    printf("%s","Digite as coordenadas dos pontos");
    scanf("%f",&xa);
    scanf("%f",&ya);
    scanf("%f",&xb);
    scanf("%f",&yb);
    float xc=xb;
    float yc=ya;
    float a=dist(xa,ya,xc,yc);
    float b=dist(xb,yb,xc,yc);
    float area=(a*b)/2;
    printf("%g",area);
    
    return 0;
}
float dist(float xa,float ya,float xb,float yb){
    float d;
    d=sqrt(pow((xa-xb),2)+pow((ya-yb),2));
return d;
}