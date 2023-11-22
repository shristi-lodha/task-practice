// problem 1:

// #include<stdio.h>
// int main(){

//     int size;
//     printf("How many elements do you want to store in array :");
//     scanf("%d",&size);
//      int arr[size];
//     printf("Enter %d elements of array :",size);
//      for(int i =0;i<size;i++){
//         scanf("%d",&arr[i]);
//      }
//      printf("\nThe %d elements that given by user are :\n",size);
//      for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//      }
//     return 0;
// }

// Problem 2:

// #include<stdio.h>
// int main(){
//     int size;
//      printf("How many elements do you want to store in array :");
//     scanf("%d",&size);
//     int arr[size];
//        printf("Enter %d elements of array :",size);
//      for(int i =0;i<size;i++){
//         scanf("%d",&arr[i]);
//      }
//      printf("\nThe %d elements that given by user are :\n",size);
//      for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//      }
//      printf("\nThe %d elements of Array in Reverse Order are :\n",size);
//      for(int i=size-1;i>=0;i--){
//         printf("%d ",arr[i]);
//      }
//     return 0;
// }

// Problem 3:

// #include<stdio.h>

// int main(){
// int size,sum=0;
// printf("How many elements do you want to store in array :");
// scanf("%d",&size);
// int arr[size];
// printf("\nEnter %d elements of array :",size);
// for(int i=0;i<size;i++){
//     scanf("%d",&arr[i]);
// }
// printf("\n The elements entered by user are :");
// for(int i=0;i<size;i++){
//     sum =sum+arr[i];
//   printf("%d ",arr[i]);
// }
// printf("\nThe sum of %d elements are : %d",size,sum);
//     return 0;
//}

// Problem 4:

// #include<stdio.h>

// int main(){
//   int n;

//   printf("How many elements do you want to store in array :");
//   scanf("%d",&n);
//   int arr[n];
//    int oddarray[n];
//    int evenarray[n];
//    int countodd =0;
//    int counteven =0;
//   printf("\nEnter %d elements :",n);
//   for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//   }
//   printf("\nThe %d elements entered by user are :\n",n);
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }
// for(int i=0;i<n;i++){
//     if(arr[i] % 2 == 0){
//         evenarray[counteven] = arr[i];
//         counteven++;
//     }else{
//         oddarray[countodd] = arr[i];
//         countodd++;
//     }
// }
// printf("\n The even array is :");
// for(int i=0;i<counteven;i++){
//     printf("%d ",evenarray[i]);
// }
// printf("\n The odd array is :");
// for(int i=0;i<countodd;i++){
//     printf("%d ",oddarray[i]);
// }
//     return 0;
// }

// Problem 5:
// Parallel Sum

// #include <stdio.h>

// int main()
// {
//     int n1, n2;
//     int arr1[30];
//     int arr2[30];
//     printf("How Many Elements do you want to store in 1st array :");
//     scanf("%d", &n1);

//     printf("\nEnter %d elements of 1st array :", n1);
//     for (int i = 0; i < n1; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     printf("\nHow many elements do you want to store in 2nd array :");
//     scanf("%d", &n2);

//     printf("\nEnter %d elements of 2nd array :", n2);
//     for (int i = 0; i < n2; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }

//     if (n1 <= n2)
//     {
//         while (n1 < n2)
//         {
//             arr1[n1] = 0;
//             n1++;
//         }
//     }
//     else
//     {

//         while (n2 < n1)
//         {

//             arr2[n2] = 0;
//             n2++;
//         }
//     }

//        int parallelsum[n1]; // we can put n2 here also
//     printf("\nThe elements of First array are  :");
//     for (int i = 0; i < n1; i++)
//     {
//         printf("%d ", arr1[i]);
//     }
//     printf("\nThe elements of second array are :");
//     for (int i = 0; i < n2; i++)
//     {
//         printf("%d ", arr2[i]);
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         parallelsum[i] = arr1[i] + arr2[i];
//     }
//     printf("\nThe sum of Parallel IndeX are :");
//     for(int i=0;i<n1;i++){
//         printf("%d ",parallelsum[i]);
//     }
//      return 0;
// }

// Problem 6

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int maX = INT_MIN;
//     int min = INT_MAX;
//printf("%d %d",maX,min);
//     int n;
//     printf("How many elements do you want to enter in array :");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements :", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("\nThe %d elements entered by user are :", n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (maX < arr[i])
//         {
//             maX = arr[i];
//         }
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     printf("\nThe MaXimum element is :%d",maX);
//     printf("\nThe Minimum element is :%d",min);
//      return 0;
// }