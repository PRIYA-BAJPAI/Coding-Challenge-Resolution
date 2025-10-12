// 4. Sort an array of 0s, 1s and 2s 
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
    int count0=0,count1=0,count2=0;

    //counting 0,1 &2
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else if(arr[i]==2){
            count2++;
        }
    }

    //redefining array
    int idx=0;
    for(int i=0;i<count0;i++){
        arr[idx++]=0;
    }
     for(int i=0;i<count1;i++){
        arr[idx++]=1;
    }
     for(int i=0;i<count2;i++){
        arr[idx++]=2;
    }

    //print
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}