#ifndef DRUG_H
#define DRUG_H

struct Drug{
	char name[20];
	int dose;
	char react;
	char boost;
};

void defineTable(struct Drug d[]);
int status(char name[], int dose, char react, char boost);

#endif