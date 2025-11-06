// 39. Spiral traversal of a matrix
#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int left = 0, right = 2;
    int top = 0, bottom = 2;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", arr[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            printf("%d ",arr[i][right]);
           
        }
         right--;
        for(int i=right;i>=left;i--){
            printf("%d ",arr[bottom][i]);
            
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            printf("%d ",arr[i][left]);
            
        }
        left++;
    }
    return 0;
}
