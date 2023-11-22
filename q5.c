// Problem 5:
// Parallel Sum

#include <stdio.h>

int main()
{
    int n1, n2;
    int arr1[30];
    int arr2[30];
    printf("How Many Elements do you want to store in 1st array :");
    scanf("%d", &n1);

    printf("\nEnter %d elements of 1st array :", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nHow many elements do you want to store in 2nd array :");
    scanf("%d", &n2);

    printf("\nEnter %d elements of 2nd array :", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (n1 <= n2)
    {
        while (n1 < n2)
        {
            arr1[n1] = 0;
            n1++;
        }
    }
    else
    {

        while (n2 < n1)
        {

            arr2[n2] = 0;
            n2++;
        }
    }

       int parallelsum[n1]; // we can put n2 here also
    printf("\nThe elements of First array are  :");
    for (int i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nThe elements of second array are :");
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        parallelsum[i] = arr1[i] + arr2[i];
    }
    printf("\nThe sum of Parallel IndeX are :");
    for(int i=0;i<n1;i++){
        printf("%d ",parallelsum[i]);
    }
     return 0;
}
