#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);
long long int len(char * str);
void upper(char * str);
void contap(char * str);

int main(void) {    
    char s[N];
    printf("Escreva uma mensagem: ");
    getstr(s, N);
    upper(s);
    contap(s);
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
void contap(char * str){
    int p=0;
    int trava=0;
    int i;
    for(i=0;i<len(str)+1;i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='0' && str[i]<='9')||(str[i]=='-')){
            if(trava==0){
                p++;
                trava=1;
            }
        }
        else{
            trava=0;
        }
    }
    
    printf("%d",p);
    
    
}

