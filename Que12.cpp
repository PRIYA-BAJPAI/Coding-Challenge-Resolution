// 12. Count the number of occurrences of an element
#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("Enter number of elements you want to input :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    int count=0;
    printf("Enter element you want to count : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    printf("%d occured %d times",key,count);
    return 0;
}