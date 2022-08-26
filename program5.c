#include<stdio.h>
#include<conio.h>
void main(){
    char s[10],s1[7],s2[7];
    int i,j;
    puts("enter floating number:-");
    gets(s);
    i=0;
    while (s[i]!='\0' && s[i]!='.')
        s1[i++]=s[i];
        s1[i]='\0';
        j=i;
        i=0;
    while(s[j++]!='\0')
        s2[i++]=s[j];
        s2[i]='\0';
        puts(s1);
        puts(s2);
    
    
}