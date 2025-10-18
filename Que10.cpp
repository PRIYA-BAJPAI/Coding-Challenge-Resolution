//10. Leaders in an array   TC=O(n^2)
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
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}