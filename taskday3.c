//Problem 1
//No. of Occurence of all elements in an array :

// #include<stdio.h>
// int main(){
//     int arrsize,occurence;
//     printf("How many elements you wanna store :");
//     scanf("%d",&arrsize);
//     int arr[arrsize];
//     printf("\nEnter %d elements for array :",arrsize);
//     for(int i=0;i<arrsize;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe %d elements entered by user are :",arrsize);
//     for(int i=0;i<arrsize;i++){
//         printf("%d ",arr[i]);
//     }    
//     for(int i=0;i<arrsize;i++){
//         occurence =1;
//         for(int j =i+1;j<arrsize;j++){
//             if(arr[i] == arr[j]){
//                 occurence++;
//                 for(int k =j;k<arrsize-1;k++){
//                       arr[k] =arr[k+1];
//                 }
//                   arrsize = arrsize -1;
//                   j=j-1;
//             }
//         }
//         printf("\nThe occurence of element %d is :%d",arr[i],occurence);
//     }
//     return 0;
// }


//Problem 2:
//Check Array subset of another array.
// #include<stdio.h>
// void checksubset(int arrsize1,int arrsize2,int arr1[],int arr2[]){
// int flag =0;
// for(int i=0;i<arrsize1;i++){
//     for(int j=0;j<arrsize2;j++){
//         flag =0;
//         if(arr1[i] == arr2[j]){
//            flag =1;
//            break;
//         }
//     }
//     if(flag == 0){

//         printf("\nGiven Array {");
//         for(int k=0;k<arrsize1;k++){
//             printf("%d ,",arr1[k]);
//             }
//             printf(" }is not subset of  this Array {");
//              for(int k=0;k<arrsize2;k++){
//             printf("%d ,",arr2[k]);
//             }
//             printf(" }\n");
//             return;
//     }
// }
// if(flag == 1){
//     printf("\nGiven Array  {");
//         for(int k=0;k<arrsize1;k++){
//             printf("%d ,",arr1[k]);
//             }
//             printf(" }is subset of this Array {");
//              for(int k=0;k<arrsize2;k++){
//             printf("%d ,",arr2[k]);
//             }
//             printf(" }\n");
// }
// }
// int main(){

//      int arrsize1,arrsize2;
//     printf("How many elements you wanna store in First Array :");
//     scanf("%d",&arrsize1);
//     int arr1[arrsize1];
//     printf("\nEnter %d elements for array 1 :",arrsize1);
//     for(int i=0;i<arrsize1;i++){
//         scanf("%d",&arr1[i]);
//     }

//     printf("\nHow many elements you wanna store in Second Array :");
//    scanf("%d",&arrsize2);
//    int arr2[arrsize2];
//     printf("\nEnter %d elements for array 2 :",arrsize2);
//     for(int i=0;i<arrsize2;i++){
//         scanf("%d",&arr2[i]);
//     }

//     printf("\nThe %d elements of First Array :",arrsize1);
//     printf("{");
//     for(int i=0;i<arrsize1;i++){
//         printf(" %d ",arr1[i]);
//     } 
//     printf("}");
//     printf("\nThe %d elements of Second Array :",arrsize2);
//     printf("{");
//     for(int i=0;i<arrsize2;i++){
//         printf(" %d ",arr2[i]);
//     } 
//     printf("}");
//     checksubset(arrsize1,arrsize2,arr1,arr2);//array1 is subset of array 2or not.
//     checksubset(arrsize2,arrsize1,arr2,arr1);//array2 is subset of array 1 or not.
    
//     return 0;
// }

//scanf("%*[1-9\n]")



//Problem 6:
//Reverse at a specific position in a string.

// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[40];
// int count =0;
// int new_str[40];
// int index =0;
// printf("Enter the String :");
// scanf(" %[^\n]",str);
// int len = strlen(str);
// //printf("%d ",len);
// str[len+1] = '\0';
// int i;
// for(i=0;str[i] != '\0';i++){
//        if(str[i] == ' '){
         
//          if(count == 0){
//             for(int j = i-1;j>=0;j--){
//                     new_str[index] =str[j];
//                     index++;
//             }
//             new_str[index] = ' ';
//             index++;
//             count++;
//          }
//          else{
//              for(int j = i-1;str[j]!=' ';j--){
//                     new_str[index] =str[j];
//                     index++;
//             }
//             new_str[index] = ' ';
//             index++;
//          }
//        }
// }
// if(str[i] == '\0'){
//      for(int j = i-1;str[j]!=' ';j--){
//                     new_str[index] =str[j];
//                     index++;
//             }
// }
// printf("\nAfter reversing at a specific position our string is :\n");
// for(int i=0;i<index;i++){
//     printf("%c",new_str[i]);
// }
//     return 0;
// }




//Problem 5:
//First repeated Character.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];


// int index =-1;
// printf("Enter the String :");
// scanf(" %[^\n]",str);
// int len = strlen(str);
// //printf("%d ",len);
// str[len+1] = '\0';
// for(int i=0;str[i] != '\0';i++){
//    if(str[i] == str[i+1]){
//     printf("\nThe character %c is repeat at index : %d",str[i],i+1);
//     index++;
//     break;
//    }
// }
// if(index == -1){
//     printf("Their is no repeat character in given");
//     for(int i=0;i<=len;i++){
//         printf("%c",str[i]);
//     } 
//     printf(" string");
// }
//     return 0;
// }



//Problem 4
//largest number formed from an array.
// #include<stdio.h>

// void largestnumberform(int arr[],int arrsize){
//     int n,temp;
//  int new_arr[arrsize];
//     int number;
//     for(int i=0;i<arrsize;i++){
//     n =arr[i];
//     while(n>10){
//         n=n/10;
//     }
//     new_arr[i] = n;

//     }
//     int size =arrsize;
//     for(int i=0;i<arrsize-1;i++){
//      for(int j =0;j<arrsize-1-i;j++){
//         if(new_arr[j]<new_arr[j+1]){
//           temp =new_arr[j];
//          new_arr[j] =new_arr[j+1];
//          new_arr[j+1] =temp;
//         }
//      }
//     }
//       for(int i=0;i<arrsize-1;i++){
//      for(int j =0;j<arrsize-1-i;j++){
//         if(arr[j]<arr[j+1]){
//           temp =arr[j];
//          arr[j] =arr[j+1];
//          arr[j+1] =temp;
//         }
//      }
//       }
//     for(int i=0;i<arrsize;i++){
//         for(int j=0;j<size;j++){
            
//           n =arr[j];
//        while(n>10){
//         n=n/10;
//     } 
    
//     if(new_arr[i] == n){
//         new_arr[i] =arr[j];
//        for(int k =j;k<size-1;k++){
//         arr[k] =arr[k+1];
//        }
//        size =size-1;
//        break;
//     }
    
//     }
//     }
//     // number = new_arr;
//     // return new_arr;
//  printf("\nThe largest number can be form is : ");
//    for(int i=0;i<arrsize;i++){
//     printf("%1d",new_arr[i]);
//    }
// }

// int main(){
//           int arrsize;
        
//     printf("How many elements you wanna store :");
//     scanf("%d",&arrsize);
//     int arr[arrsize];
//      int largest_number[arrsize];
//     printf("\nEnter %d elements for array :",arrsize);
//     for(int i=0;i<arrsize;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe %d elements entered by user are :",arrsize);
//     for(int i=0;i<arrsize;i++){
//         printf("%d ",arr[i]);
//     }    
//       largestnumberform(arr,arrsize);
  
//     return 0;
// }


//Problem :3
//Largest subarray with 0 sum
#include<stdio.h>
void printarray(int arr[],int arrsize){
 printf("\nthe array is : {");
    for(int i=0;i<arrsize;i++){
        printf("%d ",arr[i]);
    }   
}
int main(){
     int arrsize;
        
    printf("How many elements you wanna store :");
    scanf("%d",&arrsize);
    int arr[arrsize];
     
    printf("\nEnter %d elements for array :",arrsize);
    for(int i=0;i<arrsize;i++){
        scanf("%d",&arr[i]);
    }
    

return 0;
}