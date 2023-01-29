#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);
long long int len(char * str);
void upper(char * str);
void reverse(char * str);

int main(void) {    
    char s[N];
    printf("Escreva uma mensagem: ");
    getstr(s, N);
    upper(s);
    reverse(s);
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
void reverse(char * str){
    int n=0;
    char txt[len(str)+1];
    txt[len(str)]='\0';
    int i;
    for(i=0;i<len(str);i++){
        if(str[i]>='A' && str[i]<='Z'){
            txt[n]=str[i];
            n++;
        }
    }
    i=0;
    int k=0;
    int y=n-1;
    for(k=0;k<n;k++,y--){
        if(txt[k]!=txt[y]){
            i=1;
        }
    }
    if(i==0){
        printf("Palindrono: Verdadeiro");
    }
    else{
        printf("Palindrono: Falso");
    }
    
}

