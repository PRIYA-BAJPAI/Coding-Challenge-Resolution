//  42. Print diagonals of a matrix
#include<stdio.h>
int main(){
    int arr[50][50];
    int n,m;
    printf("Enter no of rows : ");
    scanf("%d",&n);
    printf("Enter no of columns : ");
    scanf("%d",&m);
    printf("Enter %d rows & %d columns\n",n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix is \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Diagonals are : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                printf("%d ",arr[i][j]);
            }
        }
        
    }
    printf("\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==n-j-1){
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}