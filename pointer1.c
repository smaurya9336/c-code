<<<<<<< HEAD
#include<stdio.h>
void main(){
    int i,j=25;
    int *pi,*pj=&j;

    *pj=j+5;
    i=*pj+5;
    pi=pj;
    *pi=i+j;
    printf("\n&pj=%x &i=%x &j=%x &i=%x",&pj,&pi,&j,&i);
    printf("\n&i=%x",&i);
    printf("\n&j=%x",&j);
    printf("\npj=%x",pj);
    printf("\n*pj=%d",*pj);
    printf("\ni=%d",i);
    printf("\npi=%x",pi);
=======
#include<stdio.h>
void main(){
    int i,j=25;
    int *pi,*pj=&j;

    *pj=j+5;
    i=*pj+5;
    pi=pj;
    *pi=i+j;
    printf("\n&pj=%x &i=%x &j=%x &i=%x",&pj,&pi,&j,&i);
    printf("\n&i=%x",&i);
    printf("\n&j=%x",&j);
    printf("\npj=%x",pj);
    printf("\n*pj=%d",*pj);
    printf("\ni=%d",i);
    printf("\npi=%x",pi);
>>>>>>> 95a212169a58ab3e4020c7742e42af4f435d2a25
}