#include <stdio.h>
#include <string.h>

#define N 1024

void getbin(char * str, long long int nchar);
int bin2dec(char * msg);

int main(void) {
    char xxx[N];
    printf("Entre com binario: ");
    getbin(xxx, N);
    printf("%s = %d\n", xxx, bin2dec(xxx));
    return 0;
}

int bin2dec(char * msg) {
    int num = 0;
    for(int i=strlen(msg)-1;i>=0; i--) {
        if (msg[i] == '1')
            num += 1 << i;
    }
    return num;
}

void getbin(char * str, long long int nchar) {
    char c;
    long long int i; 
    for(i = 0; i < nchar && (c = getchar()) != '\n'; 
            i += (c == '0' || c == '1')? 1 : 0)
        if(c == '0' || c == '1')
            str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}