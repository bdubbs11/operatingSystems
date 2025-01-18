#include <stdio.h>

int main()
{ 
  int num = 10;
  while(num > 0){
    if ( num % 2 == 0 ){
       printf("only even from 10 to 1 see... %d \n", num);
    }
     num--;
  }
 
  return 0;


}
