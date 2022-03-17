#include<string.h>
#pragma warning (disable:4996)

void myswap(char x[20], char y[20]) {
	char temp[20];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}


/*void myswap(int x[20], int y[20]) {
	int temp[20];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}*/

