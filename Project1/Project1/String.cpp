#include "String.h"

void String::copy(const char* str) {
	start = new char;
	size = 0;
	const char* i = str; //the contents of str will mot be modified
	char* iterator = start;
	while (*i != 0) {
		*iterator = *i;
		++iterator;
		++i;
		++size;
	}
	++iterator;
	*iterator = 0;
}

String::String(const char* str){
	copy(str);
}

String::String(const String *s){
	copy(s->start);
}

String::~String(){
}
/*
String String::operator=(String a)
{
	//return String();
}

String String::operator==(String a)
{
	//return String();
}

String String::operator+(String a)
{
	//return String();
}*/
