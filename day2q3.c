
//Problem 3:


#include<stdio.h>
int main(){
int arr[40];
int arrsize;
int temp,element;
printf("Enter how many elements do you want to store in array :");
scanf("%d",&arrsize);
printf("\nEnter %d elements :",arrsize);
for(int i=0;i<arrsize;i++){
    scanf("%d",&arr[i]);
}
printf("\nThe %d elements entered by user are :",arrsize);
for(int i=0;i<arrsize;i++){
    printf("%d ",arr[i]);
}
//BubbleSort-
/*  6 4 2 7 1       4 2 6 1 7       2 4 1 6 7       2 1 4 6 7 
    4 6 2 7 1       2 4 6 1 7   =>  2 4 1 6 7  =>   1 2 4 6 7
    4 2 6 7 1    => 2 4 6 1 7       2 1 4 6 7
    4 2 6 7 1       2 4 1 6 7       
    4 2 6 1 7     
    



*/
for(int i=0;i<arrsize-1;i++){  // number of passes
    for(int j=0;j<arrsize-1-i;j++){//number of comparison
            if(arr[j]>arr[j+1]){
                   temp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = temp;
            }
    } 
}
printf("\nAfter Sorting Our array is :");
for(int i=0;i<arrsize;i++){
    printf("%d ",arr[i]);
}
printf("\nEnter the element that has to be insert in that array :");
scanf("%d",&element);
int i;
for(i=0;i<arrsize;i++){
    if(element<=arr[i]){
        for(int indeX =arrsize-1;indeX>=i;indeX--){
            arr[indeX+1] =arr[indeX];
        }
        arr[i] = element;
        break;
    }
}
if(i == arrsize){
    arr[i] = element;
}
printf("\nAfter Inserting element %d our array is :",element);
for(int i=0;i<=arrsize;i++){
    printf("%d ",arr[i]);
}
    return 0;
}