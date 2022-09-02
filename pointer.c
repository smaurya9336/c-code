#include<stdio.h>
#include<conio.h>
void main(){
    char u,v='A';
    char *pu,*pv=&v;
    *pv=v+1;
    u=*pv+1;
    pu=&u;
    printf("&u=%x &v=%x",&u,&v);
    printf("\n&pu=%x &pv=%x",&pu,&pv);
    printf("\n&v=%x",&v);
    printf("\nu=%c",u);
    printf("\n&u=%x",&u);
    printf("\n*pv=%c",*pv);
    printf("\n*pu=%x",*pu);
    printf("\npu=%c",*pu);
    printf("\npu=%x",pu);
}