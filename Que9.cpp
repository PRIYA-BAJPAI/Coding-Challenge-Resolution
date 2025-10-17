// 9. Check if array is sorted and rotated
#include<stdio.h>
int rotated_sorted(int arr[],int n){
    int dec=0;
    int inc=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            inc++;
        }
        if(arr[i]<arr[(i+1)%n]){
            dec++;
        }
    }
    if(inc==1 && arr[0]>arr[n-1])
    return 1;
    else if(dec==1 && arr[0]<arr[n-1])
    return 1;
    else
    return 0;
}
int main(){
    int arr[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(rotated_sorted(arr,n)){
        printf("given array is rotated sorted array.");
    }else{
        printf("given array is not rotated sorted array");
    }
    return 0;
}