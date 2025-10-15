// 7. Cyclically rotate an array by one
#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int first=a[0];
    for (int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=first;
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}