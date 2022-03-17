#pragma once

#include<iostream>
using namespace std;


class ComplexClass
{


    mutable	int m_real;
    int  m_img;
	static int count;

public:
		ComplexClass();
		ComplexClass(int , int );

		ComplexClass(const ComplexClass & cc);

		//getter setter called properties
		int getreal()const;
	    int getimg()const;
	    void setreal(int);
	    void setimg(int);

        void accept();
        void display()const;
		static void count_objects();//const;
		ComplexClass operator +(const ComplexClass&);
		ComplexClass operator -();
		ComplexClass&  operator++();
		ComplexClass&  operator++(int);

};

extern int countr;