#include<iostream>
#pragma warning(disable : 4996)

typedef struct Address
{
	char city[20];
	int pincode;

}addr;
typedef struct Employee
{
	int empid;
	char *name[20];
	addr myaddress;
}Employee;


/*int main() {
	char * string = (char*)malloc(80);
	Employee e1;
	//e1.name = (char*)malloc(20);
	printf("enter name and id:\n");
	scanf("%d %s %s %d", &e1.empid, &e1.name, &e1.myaddress.city, &e1.myaddress.pincode);
	printf("%d %s %s %d", e1.empid, e1.name, e1.myaddress.city, e1.myaddress.pincode);
	free(e1.name);
	//e1.name=NULL;
	return 0;
}*/