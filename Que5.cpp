// 5. Move all negative numbers to beginning and positive to end
#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0,h=n-1;
    int temp;
    while(l<=h){
        if(a[l]<0){
            l++;
        }else if(a[l]>0){
            temp=a[l];
            a[l]=a[h];
            a[h]=temp;
            h--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}