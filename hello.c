#include <stdio.h>

int main()
{ 
  int temp;
  int upperTemp = 85;
  int lowerTemp =70;

  printf("What is the current temp: ");
  scanf("%d \n", &temp);

  printf("this is the temp you entered %d \n", lowerTemp < temp && temp < upperTemp);

  return 0;


}
