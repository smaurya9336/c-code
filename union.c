//C program to find union of two sorted array  
#include<stdio.h>
#include<conio.h>
int printUnion(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            printf("%d",arr1[i++]);
        }
        else if(arr2[j]<arr1[i]){
            printf("%d",arr2[j++]);
        } 
        else{
            printf("%d",arr2[j++]);
            i++;
        }
    }
    while(i<m){
        printf("%d",arr1[i++]);
    }
    while(i<n){
        printf("%d",arr2[j++]);
    }

}
int main(){
    int arr1[]={2,3,5,4,7,8,9};
    int arr2[]={1,2,6,9,5,2};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    printUnion(arr1,arr2,m,n);
    getchar();
    return 0;
}