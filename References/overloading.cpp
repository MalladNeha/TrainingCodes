

#include<iostream>
#define MACRO(num ) num *num


using namespace std;

void show(int x, int y = 1, int z = 0);

extern "C"
{
	void foo(int x);
	//void foo(float x);
}

inline int square(int x)
{
	return x *x;
}

class Demo {
	//const int x;
	//const int& myref;
public:
	Demo()
	{
	}

	//Demo(const int &xx) :myref(xx)	{}
	//void operator()(int x, int y)
	//{ cout << "function called" << endl;}
		//void showx() {cout << myref << endl;}

		void myfunction() {
			cout << "my member function called" << endl;
		}

};

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y) {
	return x *y;
}

void function(int(*ptr) (int, int))
{
	//Demo dd(100);
	//cout << ptr(100, 200) << endl;
	//cout << add(10, 20) << endl;
	//dd(10, 20);
	int(*arr[3])(int, int);
	arr[0] = add;
	arr[1] = sub;
	arr[2] = mul;
	for (int i = 0; i < 3; ++i)
	{
		cout << arr[i](100, 200) << endl;
	}
	
}

int main() {
	//function(add);
	Demo dd;
	void (Demo::*ptr)();//decle n
	ptr = &(Demo::myfunction);//init
	(dd.*ptr)();//call using fun ptr
}