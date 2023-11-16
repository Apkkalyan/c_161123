// programme that change celcius to faranhite
#include <stdio.h>

int main(){
	float celcius ;
	
	printf("Enter the Current Celsius \n");
	scanf("%f", &celcius);
	
	float farenhite = (celcius*9/5)+32;
	
	printf("Current Farenhite is %f",farenhite);
	
	return 0;

}
