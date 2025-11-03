// 37. Rotate matrix by 90 degrees clockwise
#include<stdio.h>
int main(){
    int arr[50][50],rot[50][50];
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
    for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
       rot[i][j]= arr[n-j-1][i];
    }
}
printf("Matrix after 90 degree rotation\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d  ",rot[i][j]);
    }
    printf("\n");
}
return 0;
}