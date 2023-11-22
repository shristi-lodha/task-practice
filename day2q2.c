// Problem 2:

#include <stdio.h>
int main()
{
    int arrsize;
    int element;
    int delete_count;

    printf("Enter how many elements do you want to store in array :");
    scanf("%d", &arrsize);
    int arr[arrsize];
    printf("\nEnter %d elements :", arrsize);
    for (int i = 0; i < arrsize; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe %d elements entered by user are :", arrsize);
    for (int i = 0; i < arrsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element that has to be delete :");
    scanf("%d", &element);
    int indeX = 0;

    /*
    0<6
    1 == 1
    del =1;
    j =0;j<5
      2 3 4 5 1
      arr =5
      -1
      0<5
    1==2
    3==1
    4==1
    5==1
    1==1
    j=4;j<=4
    
    
    
    */
    while (indeX < arrsize)
    {
        delete_count =0;
        if (element == arr[indeX])
        {
            delete_count++;
            for (int j = indeX; j <= arrsize - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            arrsize = arrsize - delete_count;

          indeX =indeX -1;
        }
       
            indeX++;
      }

    printf("\nAfter deletion %d element the new array is :\n", element);
    for (int i = 0; i < arrsize; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

