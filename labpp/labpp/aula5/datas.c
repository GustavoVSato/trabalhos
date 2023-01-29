
#include <stdio.h>;
typedef
    struct dat{
        int dia,mes,ano;
    }
dat;

int main(void){
    dat data;
    printf("digite a data");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    if(data.mes==1){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dJAN%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==2){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dFEV%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==3){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dMAR%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==4){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dABR%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==5){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dMAI%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==6){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dJUN%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==7){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dJUL%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==8){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dAGO%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==9){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dSET%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==10){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dOUT%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==11){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dNOV%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    if(data.mes==12){
        printf("%02d.%02d.%d %02d-%02d-%d %02d/%02d/%d %02dDEZ%d",data.dia,data.mes,data.ano,data.dia,data.mes,data.ano,data.dia,data.mes,data.ano%1000,data.dia,data.ano);
    }
    return 0;
}

    
    



