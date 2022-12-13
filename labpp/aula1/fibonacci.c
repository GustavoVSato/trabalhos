#include <stdio.h>

int main()
{
    int n;
    int i=0;
    int j=1;
    int k=0;
    int l=0;
    scanf("%d",&n);
    printf("%d %s",i,",");
    while(k<n-1){
        printf("%d %s",j,",");
        l=j;
        j=l+i;
        i=l;
        k=k+1;
    
    }
    printf("%s","...");

    return 0;
}