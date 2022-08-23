//WRITE A PROGRAM TO FIND AREA OF CIRCLE IN C LANGUAGE
#include<stdio.h>
#include<conio.h>
void main(){
    float radius, area,PI=3.141;
    printf("Enter radius of circle\n:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area of circle: %0.4f\n",area);
}