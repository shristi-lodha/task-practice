// Problem 4:

#include<stdio.h>

int main(){
  int n;

  printf("How many elements do you want to store in array :");
  scanf("%d",&n);
  int arr[n];
   int oddarray[n];
   int evenarray[n];
   int countodd =0;
   int counteven =0;
  printf("\nEnter %d elements :",n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("\nThe %d elements entered by user are :\n",n);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i] % 2 == 0){
        evenarray[counteven] = arr[i];
        counteven++;
    }else{
        oddarray[countodd] = arr[i];
        countodd++;
    }
}
printf("\n The even array is :");
for(int i=0;i<counteven;i++){
    printf("%d ",evenarray[i]);
}
printf("\n The odd array is :");
for(int i=0;i<countodd;i++){
    printf("%d ",oddarray[i]);
}
    return 0;
}
