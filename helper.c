#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "drug.h"


void defineTable(struct Drug local[]){
	//struct Drug local[4];
	strcpy(local[0].name, "UN001");
	local[0].dose = 30;
	local[0].react = 'y';
	local[0].boost = 'n';
	
	strcpy(local[1].name, "UN2134");
	local[1].dose = 25;
	local[1].react = 'y';
	local[1].boost = 'y';
	
	strcpy(local[2].name, "UN009");
	local[2].dose = 30;
	local[2].react = 'n';
	local[2].boost = 'n';
	
	strcpy(local[3].name, "UN3453");
	local[3].dose = 35;
	local[3].react = 'y';
	local[3].boost = 'y';
	
}


int status(char name[], int dose, char react, char boost){
	if((dose > 30 && react == 'y') || (react == 'y' && boost == 'y')){
		return 0;
	}
	else{
		return 1;
	}
	
}