// #include<stdio.h>
// int main(){
    // int arr[10];
//     printf("1 ");
    
//     for(int i=0;i<9;i++){
        
// arr[i] =i+1;
  
//     }
//     for(int i=0;i<9;i++){
//         printf("%d ",arr[i]);
//     }
// for(int i=0;i<10;i++){
//     arr[i] =i+1;
// }
// for(int i=0;i<10;i++){
//     printf("%d ",arr[i]);
// }
// //2 problem 
// int read;
// int sum =0;
// scanf("%d",&read);
// for(int i =read -1;i>=0;i--){
// printf("%d ",arr[i]);
// }
//problem 3
// for(int i=0;i<10;i++){
// sum =sum+arr[i];
// }
//printf("%d",sum);

//problem 4
// int arr1[10];
// int arr2[20];
// for(int i=0;i<10;i++){
//     arr1[i]= i+1;
// }
// for(int i =0;i<10;i++){
// printf("%d ",arr1[i]);
// }
// for(int i=0;i<10;i++){
//     arr2[i]= arr1[i];
// }
// printf("elements\n");
// for(int i =0;i<10;i++){
// printf("%d ",arr2[i]);
// }


//problem 5

// int n;
// printf("number of elements that you want to enter :");
// scanf("%d",&n);
// int arr[n];
// int count =0;
// int temp;

// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// for(int i=0;i<n;i++){
//     printf("\t %d",i);
//    for(int j =i+1;j<n;j++){
//     if(arr[i] == arr[j]){
//         printf("hi %d %d ",arr[i],arr[j]);
//         count ++;
     
       
        
       
//             for(int k =j;k<n-1;k++){
//             arr[k] =arr[k+1];
//         }
//         n=n-1;
     
//         break;
//     }
   
   
   
// }
// }
// printf(" count = %d ",count);


//problem 6
// int arr[30];
// int n;
// int flag =0;
// printf("number of elements that you want to enter :");
//  scanf("%d",&n);
//  for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//  }
//  for(int i=0;i<n;i++){
//     flag =0;
//     for(int j = i+1;j<n;j++){
//        if(arr[i] == arr[j]){
//         flag =1;
//         for(int k =j;k<n;k++){
//             arr[k] =arr[k+1];
//         }
//         n =n-1;
//         break;
//        }
//     }
//     if(flag ==0){
//         printf("%d ",arr[i]);
//     }
//  }


//problem 7
// int arr1[10];
// int n1,n2;
// int arr2[10];
// int temp;
// printf("number of elements that you want to enter in first array :");
//  scanf("%d",&n1);
//  for(int i=0;i<n1;i++){
//     scanf("%d",&arr1[i]);
//  }
//  printf("number of elements that you want to enter in 2nd array :");
//  scanf("%d",&n2);
//  for(int i=0;i<n2;i++){
//     scanf("%d",&arr2[i]);
//  }
//  int arr3[20] ;
//  int n =n1 +n2;
//  for(int i =0;i<n1;i++){
//     arr3[i] =arr1[i];
//  }
//  int k =0;
//  for(int i =n1;i<n;i++){
//     arr3[i] =arr2[k];
//     k++;
//  }
//  for(int i=0;i<n;i++){
//     printf("%d ",arr3[i]);
//  }
//  for(int i=0;i<n-1;i++){
//     for(int j =0;j<n-1-i;j++){
//         if(arr3[j]>=arr3[j+1]){
//               temp =arr3[j];
//               arr3[j] =arr3[j+1];
//               arr3[j+1] =temp;
//         }
//     }
//  }
//  printf("\n");
//  for(int i =n-1;i>=0;i--){
//     printf(" %d ",arr3[i]);
//  }


// 8. Write a program in C to count the frequency of each element of an array. 
// int n;
// int count =1;
// int arr[20];
//  printf("number of elements that you want to enter in array :");
//    scanf("%d",&n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
//  for(int i=0;i<n;i++){
//    count =1;
//     for(int j = i+1;j<n;j++){
//        if(arr[i] == arr[j]){
//         count++;
//         for(int k =j;k<n;k++){
//             if(k ==j){
//             if(arr[i] ==arr[k]){
//                 for(int p =k;p<n;p++){
//                 arr[p] =arr[p+1];
//             }
//             n=n-1;
//             }
//             }else{
//               if(arr[i] ==arr[k]){
//                 count++;
//                 for(int p =k;p<n;p++){
//                 arr[p] =arr[p+1];
//             }
//             n=n-1;
//             }  
//             }
//            if(arr[i] == arr[k]){
//             count++;
//             k =k-1;
//            }else{

//            }
//         }
     
//         break;
//        }
//     }
//         printf("n is %d\n",n);
//         for(int i=0;i<n;i++){
//             printf("%d ",arr[i]);
//         }
//         printf(" count of %d is %d\n",arr[i],count);

//     }
 

 //9. Write a program in C to find the maximum and minimum elements in an array. 

// int arr[20];
// int n;
// int max =0;
// int min =100;
//   printf("number of elements that you want to enter in array :");
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//    }
//  for(int i=0;i<n;i++){
//     if(max<=arr[i]){
//         max =arr[i];
//     }
//  }
//  printf("max is %d ",max);
//  for(int i=0;i<n;i++){
//     if(min>arr[i]){
//         min =arr[i];
//     }
//  }
//  printf("\nmin is %d ",min);


// 10. Write a program in C to separate odd and even integers into separate arrays. 
// int n;
// int arr[20];
// int evenarr[20];
// int evecount=0;
// int oddarr[20];
// int oddcount=0;


// for(int i =0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// for(int i=0;i<n;i++){
//     if(arr[i] % 2 == 0){
           
//             evenarr[evecount] = arr[i];
//             evecount++;
//     }else{
//         oddarr[oddcount] = arr[i];
//         oddcount++;
//     }
// }
// printf("the even array is :");
// for(int i=0;i<evecount;i++){
//     printf("%d ",evenarr[i]);
// }
// printf("\n the odd array is :");
// for(int i=0;i<oddcount;i++){
//     printf("%d ",oddarr[i]);
// }

// 11. Write a program in C to sort elements of an array in ascending order.



// #include<stdio.h>
// int main(){
//    int n;
//    int temp;
//    printf("how many elements you wanna store :");
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//    } 
//    for(int i=0;i<n-1;i++){
//     for(int j =0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//            temp =arr[j];
//            arr[j] =arr[j+1];
//            arr[j+1] = temp;
//         }
//     }
//    }
//    printf("\nthe elements of array in ascending order is :");
//    for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
//    }
// return 0;
// }
  

  //12. 2. Write a program in C to sort the elements of the array in descending order. 
//   #include<stdio.h>

// int main(){
//    int n;
//    int temp;
//    printf("how many elements you wanna store :");
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//    } 
//    for(int i=0;i<n-1;i++){
//     for(int j =0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//            temp =arr[j];
//            arr[j] =arr[j+1];
//            arr[j+1] = temp;
//         }
//     }
//    }
//    printf("\nthe elements of array in ascending order is :");
//    for(int i=n-1;i>=0;i--){
//     printf("%d ",arr[i]);
//    }
// return 0;
// }


//13. Write a program in C to insert the values in the array (sorted list). 

// #include<stdio.h>

// int main(){
//     int n;
//     int value;
//     int arr[40];
// printf("how many elements you wanna store :");
// scanf("%d",&n);

// printf("\nEnter the %d elements in sorted list -",n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// printf("\nThe exist array is :");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nEnter the value that have to be insert in array :");
// scanf("%d",&value);
// for(int i=0;i<n;i++){
//     if(value<=arr[i]){
//         for(int j=n-1;j>=i;j--){
//             arr[j+1]=arr[j];
//         }
//         arr[i] =value;
//         break;
//     }
//     if(i==n-1){
//       arr[i+1] = value;
//     }
// }
// printf("\nThe new array is :");
// for(int i=0;i <= n;i++){
//     printf("%d ",arr[i]);
// }
//     return 0;
// }


//14. Write a program in C to insert values in the array (unsorted list). 

// #include<stdio.h>

// int main(){
//         int n;
//     int value;
//     int position;
//     int arr[40];
// printf("how many elements you wanna store :");
// scanf("%d",&n);

// printf("\nEnter the %d elements in unsorted list -",n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// printf("\nThe exist array is :");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }
// printf("\nEnter the value that have to be insert in array :");
// scanf("%d",&value);
// printf("\nEnter position at which you wanna to insert that %d value :",value);
// scanf("%d",&position);
// int a =0;

// for(int j =n-1;j>=position-1;j--){
//         arr[j+1] =arr[j];
//     }
//     arr[position - 1] = value;
// printf("\nThe new array is :");
// for(int i=0;i <= n;i++){
//     printf("%d ",arr[i]);
// } 
//     return 0;
// }


// 15 Write a program in C to delete an element at a desired position from an array.

// #include<stdio.h>
// int main(){
//         int n;
//     int value;
//     int position;
//     int arr[40];
// printf("how many elements you wanna store :");
// scanf("%d",&n);

// printf("\nEnter the %d elements in unsorted list -",n);
// for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// printf("\nThe exist array is :");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }

// printf("\nEnter position at which you wanna to delete that  :");
// scanf("%d",&position);
// int a =0;
// while(a<=position -1){
//     a++;
// }
// a=a-1;
// for(int j =a;j<n-1;j++){
//     arr[j] = arr[j+1];
// }
// printf("\nThe new array is :");
// for(int i=0;i < n-1;i++){
//     printf("%d ",arr[i]);
// }  
//     return 0;
// }


//16. Write a program in C to find the second largest element in an array. 

// #include<stdio.h>
// #include<limits.h>
// int main(){
//   int n;
//   int max = 0;
//   int sec_max=0;
//    printf("how many elements you wanna store :");
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//    }
//   printf("The %d elements of array are :",n);
//   for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
//   }
// // for(int i=0;i<n;i++){
// //     if(max<=arr[i]){
// //       sec_max =max;
// //         max =arr[i];
// //     }else{
// //            if(sec_max<arr[i]&& max !=arr[i]){
// //             sec_max = arr[i];
// //            }
// //     }
     
// // }
// int temp;

// for(int i=0;i<n-1;i++){
//   for(int j =0;j<n-1-i;j++){
//     if(arr[j]>arr[j+1]){
//          temp =arr[j];
//          arr[j] =arr[j+1];
//          arr[j+1] =temp;
//     }
//   }
// }
// printf("\nThe sorted array is:");
// for(int i=0;i<n;i++){
//   printf("%d ",arr[i]);
// }
// printf("\nThe second largest element is :%d",arr[n-2]);
//     return 0;
// }



// 17. Write a program in C to find the second smallest element in an array. 
// #include<stdio.h>
// int main(){
//   int n;
//   int arr[40];
//   int min =100;
//   int sec_min =100;
//   printf("how many element you wanna store :");
//   scanf("%d",&n);
//   for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   //1 way is first sort the array then print arr[1];
//   //2 way is firstly find first minimum then sec_min
   
//   for(int i=0;i<n;i++){
//        if(min>arr[i]){
//            sec_min = min;
//            min = arr[i];

//        }else{
//             if(sec_min>arr[i]){
//               sec_min = arr[i];
//             }
//        }
//   }
//   printf("\nThe second minimum element is :%d",sec_min);
//   return 0;
// }



// 18. Write a program in C for a 2D array of size 3x3 and print the matrix. 


// #include<stdio.h>
// int main(){
//   int arr[3][3];
//   printf("\nEnter the matrix elements :\n");
//   for(int i=0;i<3;i++){
//     for(int j =0;j<3;j++){
//       printf("of index (%d,%d) :",i,j);
//        scanf("%d",&arr[i][j]);
//        printf("\n");
//     }
//   }
//   printf("\nThe matrix output is :\n");
//   for(int i=0;i<3;i++){
//     for(int j =0;j<3;j++){
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }



//19. Write a program in C for adding two matrices of the same size. 

// #include<stdio.h>

// int main(){
// int n;
// printf("\nEnter the size of the matrix :");
// scanf("%d",&n);
// int arr1[n][n];
// int arr2[n][n];
//   printf("\nEnter the matrix elements :\n");
//   printf("\nElements of matrix 1:\n");
//   for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
//       printf("of index (%d,%d) :",i,j);
//        scanf("%d",&arr1[i][j]);
//        printf("\n");
//     }
//   }
//     printf("\nElements of matrix 2:\n");
//     for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
//       printf("of index (%d,%d) :",i,j);
//        scanf("%d",&arr2[i][j]);
//        printf("\n");
//     }
//   } 
//   printf("\nAddition of two matrix is :\n");
//    for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
    
//       printf("%d ",arr1[i][j]+arr2[i][j]);
//            }
//                   printf("\n");
    
//   }
//   return 0;
// }


// 20.21 Write a program in C for the subtractionor multiply of two matrices.

// #include<stdio.h>
// int main(){
//  int n;
// printf("\nEnter the size of the matrix :");
// scanf("%d",&n);
// int arr1[n][n];
// int arr2[n][n];
//   printf("\nEnter the matrix elements :\n");
//   printf("\nElements of matrix 1:\n");
//   for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
//       printf("of index (%d,%d) :",i,j);
//        scanf("%d",&arr1[i][j]);
//        printf("\n");
//     }
//   }
//     printf("\nElements of matrix 2:\n");
//     for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
//       printf("of index (%d,%d) :",i,j);
//        scanf("%d",&arr2[i][j]);
//        printf("\n");
//     }
//   } 
//   printf("\nSubtraction of two matrix is :\n");
//    for(int i=0;i<n;i++){
//     for(int j =0;j<n;j++){
    
//      // printf("%d ",arr1[i][j]-arr2[i][j]);
//       printf("%d ",arr1[i][j]*arr2[i][j]);
//            }
//                   printf("\n");
    
//   }
//   return 0;
// }


// 22.Write a program in C to find the transpose of a given matrix.
// #include<stdio.h>

// int main(){
//   int rows,columns;
//   printf("Enter the rows and columns of your matrix :");
//   scanf("%d %d",&rows,&columns);
//   int arr[rows][columns];
//     printf("\nEnter the matrix elements :\n");
 
//   for(int i=0;i<rows;i++){
//     for(int j =0;j<columns;j++){
//       printf("of index (%d,%d) :",i,j);
//        scanf("%d",&arr[i][j]);
//        printf("\n");
//     }
//   }
//   printf("\nOur Matrix is :\n");
//   for(int i=0;i<rows;i++){
//     for(int j=0;j<columns;j++){
//       printf("%d ",arr[i][j]);
//     }
//     printf("\n");
//   }
//   printf("\nAfter transpose our Matrix is :\n");
//   for(int i=0;i<columns;i++){
//     for(int j=0;j<rows;j++){
//       printf("%d ",arr[j][i]);
//     }
//     printf("\n");
//   }
//   return 0;
// } 



// 23.Write a program in C to find the sum of the right diagonals of a matrix. 
//24. Write a program in C to find the sum of the left diagonals of a matrix.
#include<stdio.h>

int main(){
 int n,sum=0;
printf("\nEnter the size of the matrix :");
scanf("%d",&n);
int arr[n][n];

  printf("\nEnter the matrix elements :\n");
  
  for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){
      printf("of index (%d,%d) :",i,j);
       scanf("%d",&arr[i][j]);
       printf("\n");
    }
  }
   printf("\nOur Matrix is :\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  //sum of right diagonal
  // for(int i=0;i<n;i++){
  // sum =sum+arr[i][i];
  // }
  //sum of left diagonal
   
 // printf("\nThe sum of right diagonal of a matrix is :%d",sum);
  printf("\nThe sum of left diagonal of a matrix is :%d",sum);
  return 0;
}


 























