//20. Maximum Product Subarray
#include<Stdio.h>
int main(){
    int arr[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left,right;
    int maxpdt=arr[0];
    for(int i=0;i<n;i++){
        int pdt=1;
        for(int j=i;j<n;j++){
            pdt=pdt*arr[j];
            if(pdt>maxpdt){
                maxpdt=pdt;
                left=i;
                right=j;
            }
        }
    }
    printf("Subarray is ");
    for(int i=left;i<=right;i++){
        printf("%d ",arr[i]);
    }
    printf("\nMaximum product is %d",maxpdt);
    return 0;
}