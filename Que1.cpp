// 1. Find the maximum and minimum element in an array
#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        //for maximum
        if(arr[i]>max){
            max=arr[i];
        }
        //for minimum
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Maximum element : %d\n",max);
    printf("Minimum element : %d\n",min);
    return 0;
}