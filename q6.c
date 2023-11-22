
// Problem 6

#include <stdio.h>
#include <limits.h>
int main()
{
    int maX = INT_MIN;
    int min = INT_MAX;
printf("%d %d",maX,min);
    int n;
    printf("How many elements do you want to enter in array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements :", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe %d elements entered by user are :", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (maX < arr[i])
        {
            maX = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nThe MaXimum element is :%d",maX);
    printf("\nThe Minimum element is :%d",min);
     return 0;
}