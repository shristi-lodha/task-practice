// Problem 1:


// #include<stdio.h>

// int main(){
// int arrsize,searchindeX=-1;
// int element;
// int ind =0;
// printf("Enter how many elements do you want to store in array :");
// scanf("%d",&arrsize);
// int arr[arrsize];
// int arr_store_searchindeX[arrsize];
// printf("\nEnter %d elements :",arrsize);
// for(int i=0;i<arrsize;i++){
//     scanf("%d",&arr[i]);
// }
// printf("\nThe %d elements entered by user are :",arrsize);
// for(int i=0;i<arrsize;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nEnter the element that to be search in array :");
// scanf("%d",&element);
// for(int i=0;i<arrsize;i++){
//     if(element == arr[i]){
//         searchindeX = i;
//          arr_store_searchindeX[ind] = searchindeX;
//         ind++;
//        // break;
//     }
// }
// // if(searchindeX == -1){
// //     printf("\nThe element %d is not found in this array !!",element);
// // }else{

// //     printf("\nThe element %d is found at indeX %d in this array.",element,searchindeX);
// // }

// if(ind == 0){
//       printf("\nThe element %d is not found in this array !!",element);
// }else{
//     printf("\nThe element %d is found at indeX ",element);
//     for(int i=0;i<ind;i++){
//         printf("%d, ",arr_store_searchindeX[i]);
//     }
// }
//     return 0;
// }

// Problem 2:

// #include <stdio.h>
// int main()
// {
//     int arrsize;
//     int element;
//     int delete_count;

//     printf("Enter how many elements do you want to store in array :");
//     scanf("%d", &arrsize);
//     int arr[arrsize];
//     printf("\nEnter %d elements :", arrsize);
//     for (int i = 0; i < arrsize; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("\nThe %d elements entered by user are :", arrsize);
//     for (int i = 0; i < arrsize; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\nEnter the element that has to be delete :");
//     scanf("%d", &element);
//     int indeX = 0;

//     /*
//     0<6
//     1 == 1
//     del =1;
//     j =0;j<5
//       2 3 4 5 1
//       arr =5
//       -1
//       0<5
//     1==2
//     3==1
//     4==1
//     5==1
//     1==1
//     j=4;j<=4
    
    
    
//     */
//     while (indeX < arrsize)
//     {
//         delete_count =0;
//         if (element == arr[indeX])
//         {
//             delete_count++;
//             for (int j = indeX; j <= arrsize - 1; j++)
//             {
//                 arr[j] = arr[j + 1];
//             }

//             arrsize = arrsize - delete_count;

//           indeX =indeX -1;
//         }
       
//             indeX++;
//       }

//     printf("\nAfter deletion %d element the new array is :\n", element);
//     for (int i = 0; i < arrsize; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


//Problem 3:


// #include<stdio.h>
// int main(){
// int arr[40];
// int arrsize;
// int temp,element;
// printf("Enter how many elements do you want to store in array :");
// scanf("%d",&arrsize);
// printf("\nEnter %d elements :",arrsize);
// for(int i=0;i<arrsize;i++){
//     scanf("%d",&arr[i]);
// }
// printf("\nThe %d elements entered by user are :",arrsize);
// for(int i=0;i<arrsize;i++){
//     printf("%d ",arr[i]);
// }
// //BubbleSort-
// /*  6 4 2 7 1       4 2 6 1 7       2 4 1 6 7       2 1 4 6 7 
//     4 6 2 7 1       2 4 6 1 7   =>  2 4 1 6 7  =>   1 2 4 6 7
//     4 2 6 7 1    => 2 4 6 1 7       2 1 4 6 7
//     4 2 6 7 1       2 4 1 6 7       
//     4 2 6 1 7     
    



// */
// for(int i=0;i<arrsize-1;i++){  // number of passes
//     for(int j=0;j<arrsize-1-i;j++){//number of comparison
//             if(arr[j]>arr[j+1]){
//                    temp = arr[j];
//                    arr[j] = arr[j+1];
//                    arr[j+1] = temp;
//             }
//     } 
// }
// printf("\nAfter Sorting Our array is :");
// for(int i=0;i<arrsize;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nEnter the element that has to be insert in that array :");
// scanf("%d",&element);
// int i;
// for(i=0;i<arrsize;i++){
//     if(element<=arr[i]){
//         for(int indeX =arrsize-1;indeX>=i;indeX--){
//             arr[indeX+1] =arr[indeX];
//         }
//         arr[i] = element;
//         break;
//     }
// }
// if(i == arrsize){
//     arr[i] = element;
// }
// printf("\nAfter Inserting element %d our array is :",element);
// for(int i=0;i<=arrsize;i++){
//     printf("%d ",arr[i]);
// }
//     return 0;
// }