// 11. Rearrange array in alternating positive & negative items
#include<stdio.h>
int main(){
    int arr[50],pos[50],neg[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //sorting positive and negative
    int p=0,ne=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[p++]=arr[i];
        }else{
            neg[ne++]=arr[i];
        }
    }
    int i=0,j=0,k=0;
    while(i<p && j<ne){
        arr[k++]=pos[i++];
        arr[k++]=neg[j++];
    }
    //remaining positive
    while(i<p){
        arr[k++]=pos[i++];
    }
    //remaining negative
    while(j<ne){
        arr[k++]=neg[j++];
    }
    //printing
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}