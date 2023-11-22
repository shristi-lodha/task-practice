// Problem 1:


#include<stdio.h>

int main(){
int arrsize,searchindeX=-1;
int element;
int ind =0;
printf("Enter how many elements do you want to store in array :");
scanf("%d",&arrsize);
int arr[arrsize];
int arr_store_searchindeX[arrsize];
printf("\nEnter %d elements :",arrsize);
for(int i=0;i<arrsize;i++){
    scanf("%d",&arr[i]);
}
printf("\nThe %d elements entered by user are :",arrsize);
for(int i=0;i<arrsize;i++){
    printf("%d ",arr[i]);
}
printf("\nEnter the element that to be search in array :");
scanf("%d",&element);
for(int i=0;i<arrsize;i++){
    if(element == arr[i]){
        searchindeX = i;
         arr_store_searchindeX[ind] = searchindeX;
        ind++;
       // break;
    }
}
// if(searchindeX == -1){
//     printf("\nThe element %d is not found in this array !!",element);
// }else{

//     printf("\nThe element %d is found at indeX %d in this array.",element,searchindeX);
// }

if(ind == 0){
      printf("\nThe element %d is not found in this array !!",element);
}else{
    printf("\nThe element %d is found at indeX ",element);
    for(int i=0;i<ind;i++){
        printf("%d, ",arr_store_searchindeX[i]);
    }
}
    return 0;
}
