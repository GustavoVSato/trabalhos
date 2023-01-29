
#include <stdio.h>
#define N 1024
void getstr(char * str,long long int nchar);
void upper(char * str);
void reverse(char * str,long long int tam);
int main(void){
    char txt[N]={'x'};
    printf("Digite o texto");
    getstr(txt,N);
    upper(txt);
    reverse(txt,N);
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
void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}
void reverse(char * str,long long int tam){
    long long i;
    for(i=tam-1;i>=0;i--){
        printf("%c",str[i]);
    }
}
