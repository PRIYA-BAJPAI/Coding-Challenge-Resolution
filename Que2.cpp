//2. Reverse an array in place
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
    printf("Reversed array :\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}