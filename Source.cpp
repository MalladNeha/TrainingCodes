#include<stdio.h>
#include"Header.h"
#include<stdlib.h>
#include<string.h>
#pragma warning(disable : 4996)

extern void function() {
	value = 2000;
	myvalue = 9999;
	printf("function called %d %d %d\n", value, myvalue,PI, variable);
	foo();
	printf("%d", value);

	char** ptr;
	int rows, cols;
	char* mystring = (char*)malloc(80);

	printf("How many string do you want?");
	scanf("&d", &rows);

	ptr = (char**)malloc(sizeof(char*) * rows);

	for (int i = 0; i < rows; ++i)
	{
		printf("enter the string: ");
		scanf("%s", mystring);
		*(ptr + i) = (char*)malloc(sizeof(char) * (strlen(mystring) + 1));
		strcpy(ptr[i], mystring);


	}
	free(mystring);
	mystring = NULL;

}