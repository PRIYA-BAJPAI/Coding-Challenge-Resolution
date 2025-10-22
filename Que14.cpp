// 14. Subarray with given sum (Two pointer / Sliding window)
//this is code for two pointer approach but not for subarray sum calculation
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
    //sorting
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int st=0,end=n-1;
    int sum=0,givensum;
    printf("Enter the value of sum : ");
    scanf("%d",&givensum);
    while(st<=end){
        sum=arr[st]+arr[end];
        if(sum<givensum){
            st++;
        }else if(sum>givensum){
            end--;
        }else{
            printf("%d + %d = %d",arr[st],arr[end],sum);
            break;
        }
    }
    return 0;
}