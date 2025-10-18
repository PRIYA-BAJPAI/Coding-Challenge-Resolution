//10. Leaders in an array   TC=O(n)
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
    int leader=arr[n-1];
    printf("%d ",leader);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
            printf("%d ",arr[i]);
        }
    }
    return 0;
}