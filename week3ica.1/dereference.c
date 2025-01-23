#include <stdio.h>

int main()
{ 

  int myNum[] = {25,50,75,100};

  for(int i = 0; i < sizeof(myNum) / sizeof(myNum[0]); i++){
    printf("%d \n", *(myNum + i));
    printf("%d \n", myNum[i])ca;  
  }
 
  return 0;


}
