#pragma once
#include<iostream>

//note template must be initlize at the place of declaration header file
//template have intrnal linkage
//here T is judy place holder for data type
template<class T>
void myswap(T& x, T& y) {
	T temp;
	temp = x;
	x = y;
	y = temp;

	
}
void myswap(char x[20], char y[20]);

template<typename T1, typename T2>
void show(const T1& x, T2& y) {
	cout << x << " " << y << endl;
}

//dont wite like this it consume more memory 
//template<typename T1, typename T2>
//void show(T1&& x, T2&& y) {
	//cout << x << " " << y << endl;
//}



