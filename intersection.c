//find intersection of two sorted array
#include<stdio.h>
#include<conio.h>
int printIntersection(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if (arr2[j]<arr1[i])
        {
            j++;
        }
        else{
            printf("%d",arr2[j++]);
            i++;
        }
        
    }
}
int main(){
    int arr1[]={2,4,6,9,4,1,3};
    int arr2[]={2,4,6,1,9,8,6};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    printIntersection(arr1,arr2,m,n);
    getchar();
    return 0;
}