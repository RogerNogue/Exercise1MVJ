#include "String.h"
#include <iostream>

void String::copy(const char* str, int siz) {
	bool fromClass = siz >= 0;
	start = new char;
	size = 0;
	const char* i = str; //the contents of str will mot be modified
	char* iterator = start;
	while ((!fromClass && *i != 0) || (fromClass && size < siz)) {
		*iterator = *i;
		++iterator;
		++i;
		++size;
	}
}

void String::printString() {
	for (int i = 0; i < size; ++i) {
		std::cout << *(start + i);
	}
	std::cout << std::endl;
}

String::String(const char* str){
	copy(str, -1);
}

String::String(const String *s){
	copy(s->start, s->size);
}

String::~String(){
}

int String::length() {
	return size;
}

void String::clear() {
	size = 0;
}

String String::operator=(String a){
	return String (a);
}

bool strComp(const String a, const String b) {
	if (a.size != b.size) return false;
	char* pointera = a.start;
	char* pointerb = b.start;
	int i = 0;
	for (i = 0; i < a.size; ++i) {
		if (*pointera != *pointerb) return false;
		++pointera;
		++pointerb;
	}
	return true;
}

bool String::operator==(String a) {
	return strComp(this, a);
}

bool String::operator==(const char* a) {
	return strComp(this, String (a));
}

String concat(const String a, const String b) {
	char* concatenation = new char;
	for (int i = 0; i < a.size; ++i) {
		*(concatenation + i) = *(a.start + i);
	}
	for (int i = 0; i < b.size; ++i) {
		*(concatenation + i + a.size) = *(b.start + i);
	}
	*(concatenation + a.size + b.size ) = 0;

	return String(concatenation + 0);
}

String String::operator+(String a){

	return concat(this, a);
}