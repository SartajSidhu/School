/* circles area
   sartaj sidhu
   2020/11/18*/
#include <stdio.h>
// function 
double area_circum(double rad){
  // set pi and area value
  double pie=3.141;
  double areac=0;
  areac=pie*rad*rad; // calculate area with pi x radius squared
  return areac; // return area
}
int main(void) {
  double input; //declare input
  printf("Please enter the radius of the circle: "); //tell user to give radius
  scanf("%lf", &input); // get input
  printf("Area of the circle is : %lf", area_circum(input)); //print area using function
}