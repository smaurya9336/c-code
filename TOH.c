#include<stdio.h>
#include<conio.h>
void TOH(int n,char A,char B,char C){
    if(n>=1){
        printf("\nMove disk 1 from %c to %c",A,B);
        return;
    }
    TOH(n-1,A,C,B);
    printf("/Move disk %d from %c to %c\n",n,A,C);
    TOH(n-1,B,A,C);
}
int main(){
    int n=3;
    TOH(n,'A','C','B');
    return 0;
}
