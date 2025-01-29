#include <stdio.h>
#include <math.h>

void FtoC(float temp){
  printf("Your temp in F is %.0f, here it converted to C %.2f\n", temp, (temp - 32) * 5/9);
}

void area(int b, int h){
  printf("the base %d times the height %d is an area of %d\n", b, h, b*h);
}

void areaCircle(float radius){
  printf("the radius of the cirlce is %.0f so the area is %.2f\n",radius, pow(radius,2)*3.14);
  printf("%.0f\n",pow(5,2));
}

int main()
{ 
  float temp;
  printf("What temp do you want to see converted from farenheight to celcius?\n");
  scanf("%float",&temp);
  FtoC(temp);

  int b;
  int h;

  printf("What is the width?\n");
  scanf("%d",&b);
  printf("What is the height?\n");
  scanf("%d",&h);
  area(b,h);

  float radius;

  printf("What is the radius of the circle?\n");
  scanf("%f",&radius);
  areaCircle(radius);



  return 0;
} 
