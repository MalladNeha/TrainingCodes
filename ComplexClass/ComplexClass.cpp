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


ComplexClass::ComplexClass(const ComplexClass &cc) {
	this->m_real =cc. m_real;
	(*this).m_img = cc.m_img;
	cout << "copy contr is called" << endl;
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

//c1.add(c2)
ComplexClass ComplexClass::operator +(const ComplexClass& c) {
	ComplexClass temp;
	temp.m_img = this->m_img + c.m_img;
	temp.m_real = this->m_real + c.m_real;
	return temp;
}

ComplexClass ComplexClass::operator-()
{
	ComplexClass temp1;
	temp1.m_img = -m_img;
	temp1.m_real =-m_real;
	return temp1;
	
}

ComplexClass& ComplexClass::operator++()
{
	++m_real;
	++m_img;
	return *this;
	// TODO: insert return statement here
}

ComplexClass& ComplexClass::operator++(int)
{
	ComplexClass t = *this;
	this->m_real++;
	this->m_img++;
	return t;
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