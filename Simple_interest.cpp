// programme to find Simple interest from other values

#include <stdio.h>

int main(){
	float Prnpl , Intrst , Time ;
	
	printf("What is the Prnciple Ammount? \n ");
	scanf("%f",&Prnpl);
	printf("What is the Interest rate? \n ");
	scanf("%f",&Intrst);
	printf("What is the Time of loan ? \n ");
	scanf("%f",&Time);

	float Smpl_Intrst = (Prnpl*Intrst*Time)/100 ;
	
	printf("The Simple Interest of Principle Value is %f",Smpl_Intrst);
	return 0;


}
