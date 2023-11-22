// problem 1:

#include<stdio.h>
int main(){

    int size;
    printf("How many elements do you want to store in array :");
    scanf("%d",&size);
     int arr[size];
    printf("Enter %d elements of array :",size);
     for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
     }
     printf("\nThe %d elements that given by user are :\n",size);
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}