/*Include files */
#include <stdio.h>
#include <stdlib.h>
#include "drug.h"
#include <string.h>

/*Function Declarations*/
void OutputInit(void); 

int main(void)
	{
    /*Setup Launchpad for Printf & Scanf*/
		OutputInit(); 
		
	struct Drug local[4];
	
	defineTable(local);
		
	for(int i = 0; i < 4; i++){
		int val = status(local[i].name, local[i].dose, local[i].react, local[i].boost);
		if(val == 1){
			printf("Drug %s is accepted\n\r", local[i].name);
		}
		else{
			printf("Drug %s is not accepted\n\r", local[i].name);
		}
	}
		/*Go in waiting state. Will modify in later labs*/
		while(1);
  }
