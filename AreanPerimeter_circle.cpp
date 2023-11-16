// this programme will tell us area of circle by the given value of the radius

#include <stdio.h>

int main(){
	// variables for radius , area , perimeter;
	int radius;
	float pie= 3.14;
	
	printf("enter the radius of cicle \n");
	scanf("%d", &radius);
	
	float area = pie*radius*radius ;
	float perimeter = 2*pie*radius ;
	
	printf("Area of Circle is %f\n", area);
	printf("Perimeter of Circle is %f\n", perimeter);
	printf("Value of pie: %f", pie);
	return 0;
}

