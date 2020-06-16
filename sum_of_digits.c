#include<stdio.h>

// A computer program receives a positive integer, computes its sum of digits, and prints the sum on console. 
//If entered number is non-positive, program should ask to enter again.

void sum();

int main(){
	
	int n;

	
	printf("Please enter an integer:");
	scanf("%d",&n);
	
	if(n<0){
		printf("Please enter an integer:");
	    scanf("%d",&n);
	    sumof_digits(n);
	}
	else
	  sumof_digits();
		
	
	return 0;
}
void sumof_digits(int integer){
	
	int sum=0;
	
	    while(integer>0){
			sum+=integer%10;
			integer/=10;
		}
		printf("Sum of digits:%d",sum);
	
}

