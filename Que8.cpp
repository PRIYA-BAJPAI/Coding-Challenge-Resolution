// 8. Kadane's Algorithm - Maximum Subarray Sum
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
    int maxsum=arr[0];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
        }
        if(maxsum<sum){
            maxsum=sum;
        }
    }
    printf("maximum subarray sum is %d",maxsum);
    return 0;
}