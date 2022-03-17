/*#include<iostream>
#include<string>
#include<algorithm>
#include<crtdbg.h>

using namespace std;

int main() {
	
	string s1("neha");
	//cin >> s1;
	//getline(cin, s1);
	//cout << s1;

	

	//string s1;
	//cout << "enter string" << endl;
	//cin >> s1;

	string s2;
	s2 = s1;//copy object

	std::reverse(s1.begin(), s1.end());
	
	if (s1 == s2)
		cout << "palindrome" << endl;
	else
		cout << "not" << endl;
	
	
	cout << s2;
	cout << "leaks" << _CrtDumpMemoryLeaks() << endl;
	return 0;
}*/

#include<iostream>
#include"A.h"
#include"b.h"
#include"C.h"

using namespace std;
using neha::foo;
using neha::display;


//using namespace aditi;
//using namespace neha;
//using namespace teju = neha::aditi;

int main(){
	neha::aboli::foo();
	aditi::	display();
	neha::display();
	cout << aditi::value <<""<<neha::aboli::value<< endl;
	
	
	aditi::Demo dd;
	aditi::dd.function();

	neha::Demo d1;
	neha::d1.display();


}