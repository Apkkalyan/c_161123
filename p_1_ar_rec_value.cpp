//this is programme for calculating area of Rectangle by its demmensions

#include <stdio.h>
 int main(){
 	// defining variable for rectanle's variable
 	int length , width ;
 	
	 /* rectangle is shape with four side when the adjacent sides are making
 	90^0 angle with each other*/
 	
	printf("what is length of rectangle ?\n");
 	scanf("%d",&length);
 	printf("what is width of rectangle ?\n");
 	scanf("%d",&width);
 	
 	int area_rectangle = (length*width) ;
 	/*in c language the code are understood by the compiler is sequence in they 
 	have written , so if i had typed the farmula like befor input steps the 
 	code with through an unexpected result to me , in this case that is 0 */
 	
	printf("Area of rectanlgle is %d",area_rectangle);
 	
 	return 0;
 }
