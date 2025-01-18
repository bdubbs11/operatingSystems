#include <stdio.h>

int main()
{ 

  int num = 11;
  int* numptr = &num;
  char letter = 'x';
  char* letterptr = &letter;
  double dbl = 3.14;
  double* dblptr = &dbl;

  printf("the integer: %d, and its size in bytes: %zu, its pointer: %p and its size in bytes: %zu\n", num, sizeof(num), numptr, sizeof(numptr));
  printf("the letter: %c, and its size in bytes: %zu, its pointer: %p and its size in bytes: %zu\n", letter, sizeof(letter), letterptr, sizeof(letterptr));
  printf("the double: %.2f, and its size in bytes: %zu, its pointer: %p, and its size in bytes: %zu\n", dbl, sizeof(dbl), dblptr, sizeof(dblptr));

  int num1;
  int num2;
  printf("what is your first number:");
  scanf("%d", &num1);
  printf("what is your second number:");
  scanf("%d", &num2);

  int* numptr1 = &num1;
  int* numptr2 = &num2;

  printf(" pointer 1 %p plus pointer 2 %p is %d\n",numptr1,numptr2, *numptr1 + *numptr2);




 
  return 0;


}
