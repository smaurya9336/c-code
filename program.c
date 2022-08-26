#include<stdio.h>
#include<conio.h>
void main(){
    char a[100],b[100],sum[100];
    int i=0,s,c=0;
    printf("enter two numbers\n:");
    gets(a);
    gets(b);
    strrev(a);
    strrev(b);
    printf("\n nos 1:%s",a);
    printf("\n nos 2:%s",b);
    while(a[i]!='\0' && b[i]!='\0'){
        s=a[i]+b[i]-96;
        sum[i]=s%10+48;
        c=s/10;
        s=s%10;
        printf("\n %c +%c=%d",a[i],b[i],c,s);
        ++i;
    }
    if(c==1){
        sum[i++]=49;
    }
    sum[i]='\0';
    strrev(sum);
    printf("\n sum=%s",sum);
}