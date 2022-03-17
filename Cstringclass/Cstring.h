#pragma once

class Cstring {
	
	char* m_pbuff;//dynamic attribute
	int m_len;

public:
	Cstring();
	Cstring(const char*);//parametr constr
	Cstring(const Cstring &s);
	Cstring(char, int);
	void show_string();
	~Cstring();//destructor
	

};


