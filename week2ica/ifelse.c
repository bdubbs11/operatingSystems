#include <stdio.h>

int main()
{ 
  int num;
  printf("Please enter a number: ");
  scanf("%d", &num);

  if(num > 0){
    printf("%d is positive\n", num);
  } else if (num < 0){
    printf("%d is negative\n", num);
  } else {
    printf("%d is zero lol\n", num);
  }

  if(num % 2 == 0){
    printf("%d is even\n", num);
  } else {
    printf("%d is odd\n", num);
  }

  return 0;


}
