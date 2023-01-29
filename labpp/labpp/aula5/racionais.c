#include <stdio.h>
typedef
    struct racio{
        int p,q;
    }
racio;
int mdc(int x,int y);
int adc(int a,int b,int c,int d);
int sub(int a,int b,int c,int d);
int mult(int a,int b,int c,int d);
int main(void){
    racio Q1;
    printf("escreva o racional");
    scanf("%d %d",&Q1.p,&Q1.q);
    
    int D;
    D=mdc(Q1.p,Q1.q);
    Q1.p=Q1.p/D;
    Q1.q=Q1.q/D;
    racio Q2;
    printf("escreva o racional");
    scanf("%d %d",&Q2.p,&Q2.q);
    
    D=mdc(Q2.p,Q2.q);
    Q2.p=Q2.p/D;
    Q2.q=Q2.q/D;
    if(Q1.q<0){
        Q1.q=Q1.q*(-1);
        Q1.p=Q1.p*(-1);
    }
    if(Q2.q<0){
        Q2.q=Q2.q*(-1);
        Q2.p=Q2.p*(-1);
    }
    printf("%d/%d %d/%d ",Q1.p,Q1.q,Q2.p,Q2.q);
    adc(Q1.p,Q1.q,Q2.p,Q2.q);
    sub(Q1.p,Q1.q,Q2.p,Q2.q);
    mult(Q1.p,Q1.q,Q2.p,Q2.q);
    mult(Q1.p,Q1.q,Q2.q,Q2.p);
    return 0;
}

int mdc(int x,int y){
    if(x<0){
        x=x*-1;
    }
    if(y<0){
        y=y*-1;
    }
    if(x!=0 && y!=0){
        mdc(y,x%y);
    }
    if(x==0){
        return y;
    }
    if(y==0){
        return x;
    }
}
int adc(int a,int b,int c,int d){
    int p;
    int q;
    p=(a*d)+(c*b);
    q=b*d;
    int D;
    if(p==0){
        printf("0/1 ");
    }
    else{
        D=mdc(p,q);
        p=p/D;
        q=q/D;
        if(q<0){
            q=q*-1;
            p=p*-1;
        }
        printf("%d/%d ",p,q);
    }
    return 0;
}
int sub(int a,int b,int c,int d){
    int p;
    int q;
    p=(a*d)-(c*b);
    q=b*d;
    int D;
    if(p==0){
        printf("0/1 ");
    }
    else{
        D=mdc(p,q);
        p=p/D;
        q=q/D;
        if(q<0){
            q=q*-1;
            p=p*-1;
        }
        printf("%d/%d ",p,q);
    }
    return 0;
}
int mult(int a,int b,int c,int d){
    int p;
    int q;
    int D;
    p=a*c;
    q=b*d;
    if(q<0){
        q=q*-1;
        p=p*-1;
    }
    D=mdc(p,q);
    p=p/D;
    q=q/D;
    if(p!=0){
        printf("%d/%d ",p,q);
    }
    if(p==0){
        printf("0/1 ");
    }
    return 0;
    
}
   
    