#include<stdio.h> 

int main() 
{ 
int sum=0,avg,score,i=0, nostudent; 
nostudent=10; do 
{ 
 	printf("Enter score: "); 
 	scanf("%d",&score); 
 	 
 	sum=sum + score; 
 	i++; 
 	 
} 
while(i<=nostudent); avg=sum/i; 
 
printf("\nTotal score count before terminal is %d\n",i); 
printf("\n Class total score is %d:",sum);
printf("\n Average is %d:",avg);

return 0;
} 


