#include <stdio.h>

/* 
Compare 2 floating numbers and interchange if the 1st arg number is smaller 
than the 2nd
*/
void biggest(float *no1, float *no2){
	
	float temp = 0;
	
	if((*no1) < (*no2)){
		temp = (*no1);
		(*no1) = (*no2);
		(*no2) = temp;
	}
}

// Function for Sorting 3 Floating point Numbers
void sort(float *no1, float *no2, float *no3){
	
	float *numbersToSort[3] = {no1, no2, no3};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			biggest(numbersToSort[i],numbersToSort[j]);
		}		
	}
	
}

int main(){
	
	float number1;
	float number2;
	float number3;
	
	printf("Please enter 3 numbers for comparison \n");
	scanf("%f",&number1);
	scanf("%f",&number2);
	scanf("%f",&number3);
	
	printf("\n\n----------------------------------------------\n");
	printf("Numbers entered:\n\n 1st = %f\n 2nd = %f\n 3nd = %f\n\n",number1,number2,number3);
	
	sort(&number1, &number2, &number3); // Sort Function
	
	printf("The numbers sorted from Smallest to Biggest \n");
	printf("==============================================\n\n");
	printf("1) Smallest Number = %f \n", number1);
	printf("2) Middle Number = %f \n", number2);
	printf("3) Biggest Number = %f \n\n", number3);
	printf("----------------------------------------------\n");
	
	return 0;
}
