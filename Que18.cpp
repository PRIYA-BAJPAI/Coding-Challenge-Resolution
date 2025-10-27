//18. Trapping Rain Water
 #include<stdio.h>
 int main(){
    int arr[100];
    int leftmax[100],rightmax[100];
    int n,min,water=0;
    printf("Enter number of bars :");
    scanf("%d",&n);
    printf("Enter height of bar (%d) :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //finding leftmax
    leftmax[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>leftmax[i-1]){
            leftmax[i]=arr[i];
        }else{
            leftmax[i]=leftmax[i-1];
        }
    }
    //finding rightmax
    rightmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>rightmax[i+1]){
            rightmax[i]=arr[i];
        }else{
            rightmax[i]=rightmax[i+1];
        }
    }
    for(int i=0;i<n;i++){
        if(rightmax[i]<leftmax[i]){
            min=rightmax[i];
        }else{
            min=leftmax[i];
        }
         water+=(min-arr[i]);
    }
   
    printf("water trapped by rain : %d units",water);
    return 0;
 }