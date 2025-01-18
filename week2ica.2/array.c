#include <stdio.h>

int main()
{ 
  int arr[] = {7, 14, 20, 65, 33, 2, 19, 50, 93};

  int total = 0;
  int count = sizeof(arr) / sizeof(arr[0]);
  int youngest = arr[0];
  for(int i = 0; i < count; i++){
    if(arr[i] < youngest){
      youngest = arr[i];
    }
    total += arr[i];
  }

  int avg = total / count;
  printf("the average of all the ages is %d \n ", avg);
  printf("the youngest of all the ages is %d \n", youngest);
 
  return 0;


}
