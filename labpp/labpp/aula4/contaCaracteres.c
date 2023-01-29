#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);
long long int len(char * str);
void upper(char * str);
void conta(char * str);

int main(void) {    
    char s[N];
    printf("Escreva uma mensagem: ");
    getstr(s, N);
    upper(s);
    conta(s);
    return 0;
}

void getstr(char * str, int nchar) {
    char c;  int i;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        while ((c = getchar()) != '\n' && c != EOF);
    } 
}

long long int len(char * str) {
    long long int l = 0;
    while(str[l]) l++;
    return l;
}

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}
void conta(char * str){
    int l=0;
    int n=0;
    int o=0;
    int i;
    for(i=0;i<len(str);i++){
        if(str[i]>='A' && str[i]<='Z'){
            l++;
        }
        else{
            o++;
        }
    }
    for(i=0;i<len(str);i++){
        if(str[i]>='0' && str[i]<='9'){
            n++;
        }
    }
    o=o-n;
    printf("letras: %d dígitos: %d outros: %d",l,n,o);
    
    
}

