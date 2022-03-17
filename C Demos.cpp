#include<iostream>
#include<stdio.h>
#include"Header.h"

const int variable = 10000;
int value = 1000;

int main() {
	printf("hello world %d",value);

	printf("In main %d %d %d", value, myvalue,PI, variable);
	function();
	printf("In main %d %d", value, myvalue);
	foo();

	float var1 = 0.7;
	if (var1 < 0.7f)
		printf("\nhello");
	else
		printf("bye");

	int x = 3;
	int y = ++x * ++x * ++x;
	printf("%d %d \n", x, y);

	int arr[2][2] = { {10,20},{30,40} };

	printf("%u %u %u %u\n", arr, &arr, &arr[0], &arr[0][0]);
	printf("%u %u %u %u\n", arr+1, &arr+1, &arr[0]+1, &arr[0][0]+1);


}