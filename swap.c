//swap two number without using third variable
#include<stdio.h>
void main(){
    int a,b;
    a=24;
    b=25;
    printf("before swap a=%d b=%d",a,b);
    a=a+b;//24+25=49
    b=a-b;//49-25=24
    a=a-b;//49-24=25
    printf("\nafter swap a=%d b=%d",a,b);
}