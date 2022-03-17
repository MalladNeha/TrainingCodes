#pragma once

template<typename T1>

class mystack
{
	int top;
	int size;
	T1* m_pbuff;

public: mystack();
		void push(T1);
		T1 pop();
		void display();

		~mystack();


};