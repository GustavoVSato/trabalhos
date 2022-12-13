#include <stdio.h>
int main(void){
    int h,w;
    scanf("%d %f",&h,&w);
    float IMC;
    IMC= w/h/h;
    if(IMC<16){
        printf("%f %s\n",IMC,"(perigo de vida)");
    }
    if(IMC>15 && IMC<17){
        printf("%f %s\n",IMC,"(muito abaixo do peso");
    }
    if(IMC>17 && IMC<18.5){
        printf("%f %s\n",IMC,"(Abaixo do peso)");
    }
    if(IMC>18.5 && IMC<25){
        printf("%f %s\n",IMC,"(Peso normal)");
    }
    if(IMC>25 && IMC<30){
        printf("%f %s\n",IMC,"(Acima do peso)");
    }
    if(IMC>30 && IMC<35){
        printf("%f %s\n",IMC,"(Obesidade grau I)");
    }
    if(IMC>35 && IMC<40){
        printf("%f %s\n",IMC,"(Obesidade grau II)");
    }
    if(IMC>40){
        printf("%f %s\n",IMC,"(Obesidade grau III)");
    }
    return 0;
}