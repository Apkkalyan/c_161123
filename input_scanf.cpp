#include <stdio.h>

int main(){
	int  a,b ;
	
	printf("enter value of a\n");
	scanf("%d",&a);// format specifier -->%d ; &a --> address of a
	printf("Enter value of b\n");
	scanf("%d",&b);
	
	printf("additon of %d and %d\n is", a,b);
	
	printf("addition of number give here %d", a+b);
	
	return 0;
}
