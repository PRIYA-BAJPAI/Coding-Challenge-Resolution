// 16. Find duplicate number in array
#include <stdio.h>
int main()
{
    int arr[50], visited[50];
    int n;
    int count;
    bool isDuplicate = false;
    printf("Enter number of elements you want to input :");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                count++;
                visited[j] = 1;
            }
        }
        if (count != 1)
        {
            printf("duplicate element is %d repeated %d times\n", arr[i], count);
        }
    }

    if (isDuplicate == false)
    {
        printf("No duplicate element found");
    }
}