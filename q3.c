// Problem 3:

#include<stdio.h>

int main(){
int size,sum=0;
printf("How many elements do you want to store in array :");
scanf("%d",&size);
int arr[size];
printf("\nEnter %d elements of array :",size);
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("\n The elements entered by user are :");
for(int i=0;i<size;i++){
    sum =sum+arr[i];
  printf("%d ",arr[i]);
}
printf("\nThe sum of %d elements are : %d , %d",size,++sum,sum++);
    return 0;
}
