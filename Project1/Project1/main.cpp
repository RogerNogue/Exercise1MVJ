#include <iostream>
#include "Vector3.h"
#include "String.h"

using namespace std;

int main() {
	//<>
	//vector3 operations
	Vector3<int> vec(0, 0, 0);
	cout << vec.x  << endl;
	

	//string operations
	String s("hola");
	String a("hola");
	//String b = s + a;
	s.printString();
	a.printString();
	//b.printString();

	while(1){}
}