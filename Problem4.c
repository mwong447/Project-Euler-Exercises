#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int i, j;
	int mult = 0;
	int array[999][999];
	for(i = 1; i <=999;i++){
		
		for(j = 1; j<=999; j++){
			mult = i*j;
			array[i][j] = mult;
		}
		
		
	}
	
	printf("%d\n",array[20][30]);
}
