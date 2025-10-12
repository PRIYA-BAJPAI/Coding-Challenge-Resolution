// 4. Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)
#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);

    //input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0,m=0;
    int h=n-1;
    int temp;
    while(m<=h){
   
        if(arr[m]==0){
            temp=arr[l];
            arr[l]=arr[m];
            arr[m]=temp;
            m++;
            l++;
        }else if(arr[m]==1){
            m++;
        }else if(arr[m]==2){
            temp=arr[h];
            arr[h]=arr[m];
            arr[m]=temp;
            h--;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}