#include<stdio.h>
#pragma warning (disable : 4996)
//using namespace std;

int main() {
	int a, b, c, d, e,avg1;
	float  avg;


	printf( "\n Enter 5 numbers:");
	scanf("%d%d%d%d%d\n", &a,&b,&c,&d,&e);
	//Average using implicit typecasting
	avg1 = (a + b + c + d + e) / 5;
	printf("\n Average using Implicit typecasting :%f" , avg1);
	//Average using Explicit typecasting
	avg = (float)((a + b + c + d + e) / 5);
	printf("\nAverage using Explicit typecasting :%f" ,avg);
	return 0;
}