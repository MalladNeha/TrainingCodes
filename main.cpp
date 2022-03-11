
#include<iostream>
#include"complex.h"
#include<crtdbg.h>
using namespace std;


int main()
{
	/*
	int *ptr = new int[3];
	//cin >> *ptr;

	//int *ptr = new int(3);
	//ptr[0] = 10;
	//ptr[1] = 20;
	//*(ptr + 2) = 30;
	cout << *ptr<<endl;
	delete ptr;
	ptr = nullptr;

	
	char* mystring = new char[8];
	//cin >> mystring;
	cin.getline(mystring, 8);
	cout << mystring<<endl;
	delete[]mystring;
	mystring = nullptr;



	//ComplexClass* cptr = (ComplexClass*)malloc(sizeof(ComplexClass));
	//ComplexClass* cptr = new ComplexClass(1000, -99);
	//cptr->accept();
	//cptr->display();
	//free(cptr);
	//delete cptr;
	//cptr = NULL;
	


	ComplexClass* cptr = new ComplexClass[3];
	for (int i = 0; i < 3; ++i)
		cptr[i].accept();

	//for (int i = 0; i < 3; ++i)
		//(cptr + i)->display();
	 //delete[]cptr;
    //cptr = nullptr;

	cout << "leaks" << _CrtDumpMemoryLeaks() << endl;


	//ComplexClass s1;
	//cout << s1.count << endl;



	ComplexClass* cptr1[3] = { new ComplexClass(1000,-99), new ComplexClass(100,-97),new ComplexClass(10,-9) };
	for (int i = 0; i < 3; ++i) {
		cptr1[i]->display();
		delete cptr1[i];
	}
	//free(cptr);
	//delete cptr;
	//cptr = NULL;
		

	cout << sizeof(ComplexClass) << endl;


	//c1.count_objects();
	//ComplexClass::count_objects();
	//static fun using class name*/

	//ComplexClass c1(100,-200);
	//c1.setreal(10);
	//c1.setimg(-20);
	//c1.display();

	//ComplexClass c2(20, -30);
	//c2.display();

	/*ComplexClass c2(20,-30);
	c2.display();
	cout << "real is" << c2.getreal() << endl;
	cout << "img is" << c2.getimg() << endl;
	*/



	/*ComplexClass c1();
	cout << "Address of" << &c1 << endl;

	ComplexClass c2();
	cout << "Address of" << &c2 << endl;*/

	//non const obj can aslo call const mem func
	//ComplexClass c1();
	//c2.accept();
	//c2.display();


	//const obj can  call only const mem func
	//const ComplexClass c2(20, -30);
	//c2.display();

	return 0;
	
}