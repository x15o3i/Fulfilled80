#include <stdio.h> 
int main() 
{ 
float bmi,bmi_cartegory,weight,height,height2; do //looping statement 
{ 
 	printf("\nEnter your weight:\t"); scanf("%f",&weight); 
	 	printf("Enter your height:\t"); 
 	 	scanf("%f",&height);  	 	height2=height*height;  	 	bmi = weight / height2; 
 	 	 
 	 	if (bmi<15) 
 	{ 
 	 	printf("BMI category  %f is \t \nStarvation!!\t",bmi); 
 	 	 
 	} 
 	 
 	if (bmi>=15.1 && bmi<=17.5) 
 	{ 
 	 	printf("BMI category  %f is \t \nAnorexic!!\t",bmi); 
 	 	 
 	} 
 	if (bmi>=17.6 && bmi<=18.5) 
 	{ 
 	 	printf("BMI category  %f is \t \nUnderweight!!\t",bmi); 
 	 	 
 	} 
 	if (bmi>=18.6 &&bmi<=24.9) 
 	{ 
 	 	printf("BMI category  %f is \t \nIdeal!!\t",bmi); 
 	 
} 
if (bmi>=25 && bmi<=25.9) 
{ 
printf("BMI category  %f is \t \nOverweight!!\t",bmi); 
 	 
 	} 
 	if (bmi>=30&& bmi<=30.9) 
 	{ 
 	 	printf("BMI category %f is \t \nObese!!\t",bmi); 
 	 	 
 	} 
 	if (bmi>=40) 
 	{ 
 	 	printf("BMI category  %f is \t \nMorbidly Obese!!\t",bmi); 
 	 	 
 	} 
 	} 
 	while (bmi>=0 && bmi<=45); //condition/expression 
 	 
 	return 0; 
 	 
} 

