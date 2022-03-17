#include<iostream>
#include"mystack.h"
#include<string>
#include"mystack.cpp"

using namespace std;

int main() {
	mystack< string > s1;
	try{
		//menu(s1);
		s1.push("neha");
		s1.push("niku");
		s1.push("aboli");
		s1.push("aditi");
		s1.push("nik");
		

	}
	catch (const char *s) {
		cout << s << endl;
	}
	s1.display();
	try {
		cout << "poped element is" << s1.pop() << endl;
		cout << "poped element is" << s1.pop() << endl;
		cout << "poped element is" << s1.pop() << endl;
		cout << "poped element is" << s1.pop() << endl;
		cout << "poped element is" << s1.pop() << endl;
		cout << "poped element is" << s1.pop() << endl;
	}
	catch (const char *s) {
		cout << s << endl;
	}
		s1.display();



		mystack< double > s2;
		try {
			//menu(s1);
			s2.push(1.2);
			s2.push(1.2);	
			s2.push(1.2);
			s2.push(1.2);
			s2.push(1.2);
		}
		catch (const char *s) {
			cout << s << endl;
		}
		s2.display();
		try {
			cout << "poped element is" << s2.pop() << endl;
			cout << "poped element is" << s2.pop() << endl;
			cout << "poped element is" << s2.pop() << endl;
			cout << "poped element is" << s2.pop() << endl;
			cout << "poped element is" << s2.pop() << endl;
			cout << "poped element is" << s2.pop() << endl;
		}
		catch (const char *s) {
			cout << s << endl;
		}
		s2.display();
}