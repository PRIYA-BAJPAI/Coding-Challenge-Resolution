// 14. Subarray with given sum (Two pointer / Sliding window)
#include<stdio.h>
int main(){
    int arr[50];
    int n,i;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int st=0,sum=0,givensum,end;
    printf("Enter the value of sum : ");
    scanf("%d",&givensum);
    for(end=0;end<n;end++){
        sum=sum+arr[end];
    
    while(sum>givensum && st<end){
        sum=sum-arr[st];
        st++;
    }   
    if(sum==givensum){
        printf("given sum is found between index %d and %d",st,end);
        return 0;
    }
    }
    printf("given sum is not found in the array");
    return 0;
}