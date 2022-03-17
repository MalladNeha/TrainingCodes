#pragma once
#include<iostream>

namespace neha{

	class Demo {

	public: void function() { std::cout << "display neha called" << std::endl; }
	};

	static void display() {
		std::cout << "display neha" << std::endl;

	}

	namespace aboli{
		const int value = 10;

		inline void foo() {
			std::cout << "foo by neha" << std::endl;
		}
	}
	
}
