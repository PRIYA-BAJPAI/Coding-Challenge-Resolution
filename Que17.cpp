//17. Find intersection of two sorted arrays
#include<stdio.h>
int main(){
    int a[50],b[50];
    int n,m;
    printf("Enter number of elements you want to input in array1 :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number of elements you want to input in array2 :");
    scanf("%d",&m);
    printf("Enter %d elements :\n",m);
    for(int j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    //bubble sort 
    int temp1;
    int temp2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;
            }
        }
    }
      for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(b[j]>b[j+1]){
                temp2=b[j];
                b[j]=b[j+1];
                b[j+1]=temp2;
            }
        }
    }
    //intersection
    printf("Common elements are\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}
