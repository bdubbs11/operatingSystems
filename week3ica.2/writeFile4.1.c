#include <stdio.h>


int main()
{

FILE *fptr;

fptr = fopen("hello.txt","w");

fprintf(fptr, "Hello, \nHow are you? \nMy name is... ,\nWhats your name?\n");

fclose(fptr);

}
