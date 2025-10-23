//15. Missing number in array [1 to n]
#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements(1 is missing) :\n",n-1);
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int arraysum=0;
    int naturalsum= n * (n+1) / 2;  //since the array is set of natural numbers
    for(int i=0;i<n-1;i++){
        arraysum+=arr[i];
    }
    printf("Missing element is %d",naturalsum-arraysum);
    return 0;
}