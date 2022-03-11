#include<iostream>
#include"complex.h"

using namespace std;

int countr = 0;

int ComplexClass::count = 0;//...

ComplexClass::ComplexClass() {
	m_real = 0;
	m_img = 0;
	//cout << this << endl;
	countr++;
	count++;
}
ComplexClass::ComplexClass(int real,int img) {
	this->m_real = real;
	(*this).m_img = img;
	countr++;
	count++;
}


int ComplexClass::getreal()const {
	return this->m_real;
}
int ComplexClass::getimg()const {
	return this->m_img;
}

void ComplexClass::setreal(int real)
{
	this->m_real = real;
	
}


void ComplexClass::setimg(int img) {
	this->m_img = img;
}

void ComplexClass::count_objects() //const
{
	cout << "count is" << countr<<" " <<count<<endl;
}




void ComplexClass::accept() {
	cout << "enter real and img number: \n"<<endl;
	cin >> m_real >> m_img;
}
void ComplexClass::display()const
{
    //const ComplexClass * const
	//m_real++;
	//const_cast < ComplexClass* const>(this)->m_img++;  //mutable removes constantnes of consatnt fun
	cout << m_real << " " << m_img<<endl;
} 