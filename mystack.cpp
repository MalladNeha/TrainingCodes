
#include<iostream>
#include"mystack.h"
#pragma warning(disable:MSB8005)

using namespace std;

template<typename T1>
mystack<T1>::mystack() {
	top = -1;
	size = 5;
	m_pbuff = new int[size];
}

template<typename T1>
void mystack<T1>::push(T1 num) {
	if (top == size)
		throw "stack is full";
	else
		m_pbuff[++top] = num;

}

template<typename T1>
T1 mystack<T1>::pop() {
	if (top == -1)
		throw "stack is empty";
	else
		return m_pbuff[top--];

}

template<typename T1>
void mystack<T1>::display() {
	int t = top;
	if (t == -1)
		cout <<"stack is empty"<< endl;
	else
	{
		while (t >= 0)
		{
			cout << m_pbuff[t] << endl;
			t--;
		}
	}
	
}

template<typename T1>
mystack<T1>::~mystack() {
	if (m_pbuff)
		delete[]m_pbuff;
	m_pbuff = nullptr;


}

template<typename T1>
void menu(mystack<const char*> &ss){
	char choice = 'y';
	int value;
	while (choice=='y')
	{
		cout << "enter the value to push" << endl;
		cin >> value;
		ss.push(value);
		cout << "enyer to continue" << endl;
		cin >> choice;
	}
	
}