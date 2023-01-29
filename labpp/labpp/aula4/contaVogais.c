
#include <stdio.h>
#define N 1024
void getstr(char * str,long long int nchar);
void vogal(char*str,long long int tam);
int main(void){
    char txt[N]={'x'};
    printf("Digite o texto");
    getstr(txt,N);
    vogal(txt,N);
    return 0;
    }

void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) 
        while ((c = getchar()) != '\n' && c != EOF);
}
void vogal(char*str,long long int tam){
    int soma=0;
    long long int j;
    for(j=0;j<tam;j++){
        if(str[j]=='a' || str[j]=='e'
            || str[j]=='i' || str[j]=='o'
            || str[j]=='u' || str[j]=='A' 
            || str[j]=='E' || str[j]=='I' 
            || str[j]=='O' || str[j]=='U'){
            soma++;
        }
    }
    printf("%d",soma);
}
