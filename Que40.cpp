// 40. Matrix multiplication
#include <stdio.h>
int main()
{
    int a[50][50], b[50][50], c[50][50];
    int r1, r2, c1, c2;
    int i, j, k;
    printf("Enter no of rows in mat1 : ");
    scanf("%d", &r1);
    printf("Enter no of columns in mat1 : ");
    scanf("%d", &c1);
    printf("Enter no of rows in mat2 : ");
    scanf("%d", &r2);
    printf("Enter no of columns in mat2 : ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("Multiplication not possible");
        return 0;
    }
    // input
    printf("Enter %d rows & %d columns of mat1\n", r1, c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d rows & %d columns of mat2\n", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // logic
    for (i = 0; i < r1; i++)
    {

        for (j = 0; j < c2; j++)
        {
            int sum = 0;
            for (k = 0; k < r2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    printf("Resultant Matrix : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}