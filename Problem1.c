#include <stdio.h>

int main(){
	
	int i;
	int sum = 0;
	
	for(i = 0; i < 1000; i++){
		
		//Need to check if the number is divisble by three
			if((i / 3 >= 0) && (i % 3 == 0) || (i / 5 >= 0 && (i % 5) == 0)){
				sum += i;
			}		
	}
	
	printf("Sum of all multiples of 3 and 5 below 1000 is:  %d\n",sum);
	
	
	
}
