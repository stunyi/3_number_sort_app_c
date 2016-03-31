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
	
	int i = 0;
	for(i; i < 3; i++){
		int j = 0;
		for(j; j < 3; j++){
			biggest(numbersToSort[i],numbersToSort[j]);
		}		
	}
	
}

int main(){
	
	float number1;
	float number2;
	float number3;
	
	for(;;){
		
		printf("Please enter 3 numbers for comparison. To close app at anytime enter 0 for all three numbers \n");	
		
		scanf("%f",&number1);
		scanf("%f",&number2);
		scanf("%f",&number3);
		
		printf("\n\n----------------------------------------------\n");
		printf("Numbers entered:\n\n 1st = %f\n 2nd = %f\n 3nd = %f\n\n",number1,number2,number3);
		
		if(number1 == 0 && number2 == 0 && number3 == 0){
			printf("Thanks for running me. \nBye ...");
			break;
		}
		
		
		sort(&number1, &number2, &number3); // Sort Function
		
		printf("The numbers sorted from Smallest to Biggest \n");
		printf("==============================================\n\n");
		printf("1) Smallest Number = %f \n", number1);
		printf("2) Middle Number = %f \n", number2);
		printf("3) Biggest Number = %f \n\n", number3);
		printf("----------------------------------------------\n");
	
	}
	return 0;
}
