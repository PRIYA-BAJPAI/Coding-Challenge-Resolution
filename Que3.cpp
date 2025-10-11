// 3. Find the 'Kth' max and min element of an array
#include<stdio.h>
int main(){
    int a[100],n,k,temp;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Enter the value of K : ");
    scanf("%d",&k);
    printf("%dth maximum element : %d\n",k,a[n-k]);
    printf("%dth minimum element : %d\n",k,a[k-1]);
    return 0;
}