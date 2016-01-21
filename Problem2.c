#include <stdio.h>
#include <stdlib.h>

int main(){
	//Not the most elegant solution - doesn't generate array dynamically
	//Need to generate large enough Fibonnaci sequence 
	
	int max = 40;
	int max2;
	int list[max-1];
	list[0]= 1;
	list[1] = 2;
	int sum = 0;
	
	int i;
	for(i = 2; i <= max; i++){
		list[i] = list[i-1] + list[i-2];		
	}
	
	//Computes max up until 40,000
	for (i = 0; i <= max; i++){
		
		max2 = list[i];
		if(max2 >=4000000)
			break;
		else if((max2/2 >= 0) && (max2 % 2 == 0))
			sum = sum + max2;
	}
	
}
